/*    This file is part of Quick Reader.
 *
 *    Quick Reader is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    Quick Reader is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with Quick Reader.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "quickreader.h"
#include "ui_quickreader.h"
#include "preferences.h"
#include "aboutquickreader.h"
#include "aboutqt.h"

QuickReader::QuickReader(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QuickReader)
{
    ui->setupUi(this);

    //Read config file and set preference variables
    //If no config is found, the default variables are already declared in the header and need not be changed
    QSettings settings(QSettings::IniFormat, QSettings::UserScope, "quickreader", "quickreader");
    textInputFontSize = settings.value("textInputFontSize", textInputFontSize).toInt();
    rememberTextInputFontSize = settings.value("rememberTextInputFontSize", rememberTextInputFontSize).toBool();
    rememberMainFont = settings.value("rememberMainFont", rememberMainFont).toBool();
    rememberPosition = settings.value("rememberPosition", rememberPosition).toBool();
    rememberWindowDimensions = settings.value("rememberWindowDimensions", rememberWindowDimensions).toBool();
    jumpBackChunks = settings.value("jumpBackChunks", jumpBackChunks).toInt();
    jumpForwardChunks = settings.value("jumpForwardChunks", jumpForwardChunks).toInt();
    rememberWPMSpeed = settings.value("rememberWPMSpeed", rememberWPMSpeed).toBool();
    rememberChunkSize = settings.value("rememberChunkSize", rememberChunkSize).toBool();
    startWithEmptyTextField = settings.value("startWithEmptyTextField", startWithEmptyTextField).toBool();
    variableSpeedEnabled = settings.value("variableSpeedEnabled", variableSpeedEnabled).toBool();
    threshold = settings.value("threshold", threshold).toInt();
    reducedSpeedPercentage = settings.value("reducedSpeedPercentage", reducedSpeedPercentage).toInt();

    setPreferences(textInputFontSize, rememberTextInputFontSize, rememberMainFont, rememberPosition, rememberWindowDimensions, jumpBackChunks , jumpForwardChunks,
                   rememberWPMSpeed, rememberChunkSize, startWithEmptyTextField, variableSpeedEnabled, threshold, reducedSpeedPercentage);

    centerAlignment();

    firstRun = false;
}

QuickReader::~QuickReader()
{
    //Save preferences to config file before quitting
    QSettings settings(QSettings::IniFormat, QSettings::UserScope, "quickreader", "quickreader");
    settings.setValue("textInputFontSize", textInputFontSize);
    settings.setValue("rememberTextInputFontSize", rememberTextInputFontSize);
    settings.setValue("rememberMainFont", rememberMainFont);
    settings.setValue("mainFont", ui->currentWord->font().toString());
    settings.setValue("rememberPosition", rememberPosition);
    settings.setValue("rememberWindowDimensions", rememberWindowDimensions);
    settings.setValue("width", this->width());
    settings.setValue("height", this->height());
    settings.setValue("fullscreen", this->isFullScreen());
    settings.setValue("jumpBackChunks", jumpBackChunks);
    settings.setValue("jumpForwardChunks", jumpForwardChunks);
    settings.setValue("rememberWPMSpeed", rememberWPMSpeed);
    settings.setValue("wpmSpeed", ui->wpmSpinBox->value());
    settings.setValue("rememberChunkSize", rememberChunkSize);
    settings.setValue("chunkSize", ui->chunkSpinBox->value());
    settings.setValue("startWithEmptyTextField", startWithEmptyTextField);
    settings.setValue("variableSpeedEnabled", variableSpeedEnabled);
    settings.setValue("threshold", threshold);
    settings.setValue("reducedSpeedPercentage", reducedSpeedPercentage);    
    settings.sync();

    //Save position in text if program is running
    savePosition();

    delete ui;
}

void QuickReader::on_textEdit_textChanged()
{
    if (ui->textEdit->document()->isEmpty())
        ui->startButton->setEnabled(false);
    else
        ui->startButton->setEnabled(true);

    updateChunkCount(QString("0"));
}

void QuickReader::buildDelimText()
{
    initDelimText = ui->textEdit->toPlainText().split(QRegExp("(\\ |\\n|\\t|\\r|\\s|\\v)+"));
    if (chunks > 1)
    {
        //Build delimited text based on the chunk size if larger than 1
        for (unsigned int i = 0; i < (unsigned int)initDelimText.size(); i += chunks)
        {
            int i2 = 0;
            delimText.append(initDelimText.at(i));
            while (i2 < chunks - 1 && (i + i2 + 1) < (unsigned int)initDelimText.size())
            {
                delimText.replace(delimText.count() - 1, delimText.at(delimText.count() - 1) + QString(" ") + initDelimText.at(i + ++i2));
            }
        }
    }
    else
        delimText = initDelimText;

    initDelimText.clear();
}

void QuickReader::updateChunkCount(QString chunkIndex)
{
    if (!delimText.isEmpty())
    {
        chunkCount = delimText.count();
        ui->chunkIndex->setText(QString("Chunk ") + chunkIndex + QString(" of ") + QString::number(chunkCount));
        ui->horizontalSlider->setMaximum(chunkCount);
    }
    else
    {
        ui->chunkIndex->setText(QString("Chunk 0 of ") + QString::number(ui->textEdit->toPlainText().split(QRegExp("(\\s|\\n|\\r)+")).count()));
    }
}

void QuickReader::updateWord()
{
    //Set focus on the text field to make the cursor highlight more visible particularly on Windows systems
    ui->textEdit->setFocus();

    if (step != (unsigned int)delimText.count())
    {
        //Slow down speed if chunk size exceeds user-defined threshold
        if (delimText.at(step).size() >= threshold)
            timer->setInterval(speed / ((float)reducedSpeedPercentage / 100));
       else
            timer->setInterval(speed);

        //Highlight current chunk
        ui->textEdit->find(delimText.at(step), QTextDocument::FindWholeWords);

        ui->currentWord->setText(delimText.at(step));
        ui->horizontalSlider->setValue(step);

        updateChunkCount(QString::number(++step));

        seconds = (((speed * chunks) * (delimText.count() - step) / 1000) / chunks);
        ui->duration->setText(QString("Duration: ") + QString::number(seconds % 3600 / 60) + QString("m ") + QString::number(seconds % 60) + QString("s"));
    }
    else
    {
        timer->stop();
        ui->horizontalSlider->setValue(ui->horizontalSlider->maximum());

        //Remove the current text's saved position after it has finished
        QSettings settings(QSettings::IniFormat, QSettings::UserScope, "quickreader", "quickreader");
        settings.beginGroup("LastPositionInText");
        settings.remove(QCryptographicHash::hash(ui->textEdit->toPlainText().toLocal8Bit(), QCryptographicHash::Md5));
        settings.endGroup();

        on_stopButton_clicked();
    }
}

void QuickReader::on_stopButton_clicked()
{
    if (running)
        timer->stop();

    running = paused = false;
    step = 0;

    ui->restartButton->setEnabled(false);
    ui->stopButton->setEnabled(false);
    ui->horizontalSlider->setEnabled(false);
    ui->textEdit->setReadOnly(false);
    ui->startButton->setText(QString("Start"));
    ui->startButton->setIcon(QIcon(":/icons/Assets/play.svg"));
    delimText.clear();
    updateChunkCount(QString("0"));
    ui->duration->setText(QString("Duration: 0s"));
}

void QuickReader::on_restartButton_clicked()
{
    step = 0;
    ui->textEdit->setTextCursor(QTextCursor());
    updateWord();
}

void QuickReader::on_startButton_clicked()
{
    if (!running)
    {
        ui->startButton->setText(QString("Pause"));
        ui->startButton->setIcon(QIcon(":/icons/Assets/pause.svg"));
        ui->stopButton->setEnabled(true);
        ui->restartButton->setEnabled(true);
        ui->horizontalSlider->setEnabled(true);
        ui->textEdit->setReadOnly(true);

        //Correct font if it is not set correctly if the user has manually written text after clearing it all first
        if (ui->textEdit->fontPointSize() != textInputFontSize)
            setTextInputFontSize(textInputFontSize);

        chunks = ui->chunkSpinBox->value();
        delimText.clear();
        buildDelimText();

        if (step > (unsigned int)delimText.count())
            step = 0;

        //Fix alignment just in case
        if (!paused)
            centerAlignment();

        speed = 1000 / (ui->wpmSpinBox->value() / 60) * chunks;
        timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(updateWord()));
        timer->start(speed);
        running = true;
        paused = false;
    }
    else
    {
        ui->startButton->setText(QString("Resume"));
        ui->startButton->setIcon(QIcon(":/icons/Assets/play.svg"));
        timer->stop();
        running = false;
        paused = true;

    }
}
void QuickReader::on_wpmSpinBox_valueChanged(int arg1)
{
    speed = 1000 / (arg1 / 60) * chunks;
    if (running)
        timer->setInterval(speed);
}

void QuickReader::on_horizontalSlider_sliderPressed()
{
    if (timer->isActive())
        timer->stop();

    QApplication::setOverrideCursor(Qt::ClosedHandCursor);
}

void QuickReader::on_horizontalSlider_sliderReleased()
{
    if (!timer->isActive() && running)
        timer->start(speed);

    QApplication::restoreOverrideCursor();
}

void QuickReader::on_horizontalSlider_sliderMoved(int position)
{
    //Recalculate the new position of the cursor highlight
    QTextCursor cursor = ui->textEdit->textCursor();

    //Find the absolute character position of the chosen position in the text
    unsigned long long charPos = 0;
    for (unsigned long long i = 0; i <= (unsigned long long)position; i++)
        charPos += delimText.at(i).count();

    cursor.setPosition(charPos, QTextCursor::MoveAnchor);
    ui->textEdit->setTextCursor(cursor);

    step = position;
    updateWord();
}

void QuickReader::on_actionJump_back_triggered()
{
    if (step > (unsigned int)jumpBackChunks)
        on_horizontalSlider_sliderMoved(step - jumpBackChunks);
    else
        on_restartButton_clicked();
}

//Jumping back and forward are redirected to the horizontal slider move action so that
//recalculating both movement and the chunk highlight are more centralized

void QuickReader::on_actionJump_forward_triggered()
{
    if (step + jumpForwardChunks < (unsigned int)delimText.count())
        on_horizontalSlider_sliderMoved(step + jumpForwardChunks);
    else
        on_horizontalSlider_sliderMoved(delimText.count());
}

void QuickReader::on_chunkSpinBox_valueChanged(int arg1)
{
    //Checking running or paused is the only way I could think of to check if the reader has been started because if
    //you check whether the timer is active it will cause a crash if you try to change the chunk size before starting
    if (running | paused)
    {
        timer->stop();

        step = step * chunks / arg1;

        chunks = arg1;
        delimText.clear();
        buildDelimText();

        speed = 1000 / (ui->wpmSpinBox->value() / 60) * chunks;

        if (!paused)
            timer->start(speed);
        else
            timer->setInterval(speed);
    }
}

void QuickReader::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void QuickReader::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void QuickReader::on_actionCopy_to_clipboard_triggered()
{
    if (!ui->textEdit->toPlainText().isEmpty())
    {
        QClipboard *clipboard = QGuiApplication::clipboard();
        clipboard->setText(ui->textEdit->toPlainText());
    }
}

void QuickReader::on_actionPasteReplace_triggered()
{
    savePosition();

    on_stopButton_clicked();

    ui->textEdit->setText(QString(""));
    QClipboard *clipboard = QGuiApplication::clipboard();
    ui->textEdit->setText(clipboard->text());

    centerAlignment();

    setTextInputFontSize(textInputFontSize);

    restorePosition(rememberPosition);
}

void QuickReader::on_actionStart_Stop_triggered()
{
    on_startButton_clicked();
}

void QuickReader::on_actionSave_triggered()
{    
    //For opening and saving the last directory
    QSettings settings(QSettings::IniFormat, QSettings::UserScope, "quickreader", "quickreader");

    QString fileName = QFileDialog::getSaveFileName(this, "Save file as", settings.value("lastDirectory").toString(), tr("Text Files (*.txt);; All Files (*)"));

    QFile file(fileName);

    if (!file.open(QFile::WriteOnly | QFile::Text))
        return;

    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();

    //Save the last directory
    QFileInfo directory(fileName);
    settings.setValue("lastDirectory", directory.absolutePath());
}

void QuickReader::on_actionOpen_triggered()
{
    savePosition();

    on_stopButton_clicked();

    //For opening and saving the last directory
    QSettings settings(QSettings::IniFormat, QSettings::UserScope, "quickreader", "quickreader");

    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::ExistingFile);
    QString fileName = dialog.getOpenFileName(this, "Open file", settings.value("lastDirectory").toString(), tr("Text Files (*.txt);; All Files (*)"));

    QFile file(fileName);

    if (!file.open(QIODevice::ReadOnly | QFile::Text))
        return;

    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();

    //Save the last directory
    QFileInfo directory(fileName);
    settings.setValue("lastDirectory", directory.absolutePath());

    centerAlignment();

    setTextInputFontSize(textInputFontSize);

    restorePosition(rememberPosition);
}

void QuickReader::on_actionFont_triggered()
{
    ui->currentWord->setFont(QFontDialog::getFont(0, ui->currentWord->font(), this));
}

void QuickReader::on_resetButton_clicked()
{
    ui->wpmSpinBox->setValue(300);
    ui->chunkSpinBox->setValue(1);
    on_chunkSpinBox_valueChanged(1);
}

void QuickReader::on_actionPreferences_triggered()
{
    Preferences prefWindow;

    //Set connection to send and receive preferences to and from the preferences window
    connect(&prefWindow, &Preferences::preferencesChanged, this, &QuickReader::setPreferences);
    connect(this, &QuickReader::sendPreferences, &prefWindow, &Preferences::receivePreferences);

    emit sendPreferences(textInputFontSize, rememberTextInputFontSize, rememberMainFont, rememberPosition, rememberWindowDimensions, jumpBackChunks , jumpForwardChunks,
                         rememberWPMSpeed, rememberChunkSize, startWithEmptyTextField, variableSpeedEnabled, threshold, reducedSpeedPercentage);

    prefWindow.exec();
}

void QuickReader::setTextInputFontSize(int size)
{
    QTextCursor cursor = ui->textEdit->textCursor(); //Backup cursor position
    ui->textEdit->selectAll();
    ui->textEdit->setFontPointSize(size);
    ui->textEdit->setTextCursor(cursor);
}

void QuickReader::centerAlignment()
{
    ui->textEdit->selectAll();
    ui->textEdit->setAlignment(Qt::AlignCenter);
    ui->textEdit->moveCursor(QTextCursor::Start, QTextCursor::MoveAnchor);
}

void QuickReader::setPreferences(int textInputFontSize, bool rememberTextInputFontSize, bool rememberMainFont, bool rememberPosition, bool rememberWindowDimensions, int jumpBackChunks, int jumpForwardChunks,
                                 bool rememberWPMSpeed, bool rememberChunkSize, bool startWithEmptyTextField, bool variableSpeedEnabled, int threshold, int reducedSpeedPercentage)
{
    //Set preference variables
    QSettings settings(QSettings::IniFormat, QSettings::UserScope, "quickreader", "quickreader");

    //These variables are spread throughout the code and need only be set here
    this->rememberPosition = rememberPosition;
    this->jumpBackChunks = jumpBackChunks;
    this->jumpForwardChunks = jumpForwardChunks;

    //Set text input field font size
    this->rememberTextInputFontSize = rememberTextInputFontSize;

    if (rememberTextInputFontSize)
        this->textInputFontSize = textInputFontSize;
    else
        this->textInputFontSize = 9;

    setTextInputFontSize(textInputFontSize);

    //Set main font
    this->rememberMainFont = rememberMainFont;

    if (rememberMainFont && firstRun)
    {
        QFont mainFont;
        if (mainFont.fromString(settings.value("mainFont").toString()))
            ui->currentWord->setFont(mainFont);
    }

    //Set window dimensions
    this->rememberWindowDimensions = rememberWindowDimensions;

    if (rememberWindowDimensions && firstRun)
    {
        this->resize(settings.value("width", this->width()).toInt(), settings.value("height", this->height()).toInt());
        if (settings.value("fullscreen", this->isFullScreen()).toBool())
            this->setWindowState(Qt::WindowMaximized);
    }

    //Set words per minute speed
    this->rememberWPMSpeed = rememberWPMSpeed;

    if (rememberWPMSpeed && !running && !paused)
        ui->wpmSpinBox->setValue(settings.value("wpmSpeed", 300).toInt());

    //Set chunk size
    this->rememberChunkSize = rememberChunkSize;

    if (rememberChunkSize && !running && !paused)
        ui->chunkSpinBox->setValue(settings.value("chunkSize", 1).toInt());

    //Set start with an empty text field
    if (startWithEmptyTextField && firstRun)
        ui->textEdit->setText(QString(""));

    this->startWithEmptyTextField = startWithEmptyTextField;

    //Set variable speed
    this->variableSpeedEnabled = variableSpeedEnabled;

    if (variableSpeedEnabled)
    {
        this->threshold = threshold;
        this->reducedSpeedPercentage = reducedSpeedPercentage;
    }
    else
    {
        this->threshold = 1000;
        this->reducedSpeedPercentage = 100;
    }
}

void QuickReader::restorePosition(bool rememberPosition)
{
    if (rememberPosition)
    {
        QSettings settings(QSettings::IniFormat, QSettings::UserScope, "quickreader", "quickreader");
        settings.beginGroup("LastPositionInText");
        step = settings.value(QCryptographicHash::hash(ui->textEdit->toPlainText().toLocal8Bit(), QCryptographicHash::Md5), 0).toUInt();
        settings.endGroup();
    }
}

void QuickReader::savePosition()
{
    //Saving the position is done by saving the step associated with the MD5 checksum of the entire text that is currently in the text field
    if (running | paused)
    {
        QSettings settings(QSettings::IniFormat, QSettings::UserScope, "quickreader", "quickreader");
        settings.beginGroup("LastPositionInText");
        settings.setValue(QCryptographicHash::hash(ui->textEdit->toPlainText().toLocal8Bit(), QCryptographicHash::Md5), step);
        settings.endGroup();
    }
}

void QuickReader::on_actionAbout_Quick_Reader_triggered()
{
    AboutQuickReader aboutqr;
    aboutqr.exec();
}

void QuickReader::on_actionAbout_Qt_triggered()
{
    AboutQt aboutqt;
    aboutqt.exec();
}
