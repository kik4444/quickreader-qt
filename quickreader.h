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

#ifndef QUICKREADER_H
#define QUICKREADER_H

#include <QMainWindow>
#include <QStringList>
#include <QTimer>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QFontDialog>
#include <QFont>
#include <QClipboard>
#include <QTextCursor>
#include <QSettings>
#include <QCryptographicHash>
#include <QFileInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class QuickReader; }
QT_END_NAMESPACE

class QuickReader : public QMainWindow
{
    Q_OBJECT

public:
    QuickReader(QWidget *parent = nullptr);
    ~QuickReader();

public slots:
    void setPreferences(int textInputFontSize, bool rememberTextInputFontSize, bool rememberMainFont, bool rememberPosition, bool rememberWindowDimensions, int jumpBackChunks, int jumpForwardChunks,
                        bool rememberWPMSpeed, bool rememberChunkSize, bool startWithEmptyTextField, bool variableSpeedEnabled, int threshold, int reducedSpeedPercentage);

private slots:
    void updateWord();

    void updateChunkCount(QString chunkIndex);

    void buildDelimText();

    void on_textEdit_textChanged();

    void on_startButton_clicked();

    void on_stopButton_clicked();

    void on_restartButton_clicked();

    void on_wpmSpinBox_valueChanged(int arg1);

    void on_horizontalSlider_sliderPressed();

    void on_horizontalSlider_sliderReleased();

    void on_horizontalSlider_sliderMoved(int position);

    void on_actionJump_back_triggered();

    void on_actionJump_forward_triggered();

    void on_chunkSpinBox_valueChanged(int arg1);

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionCopy_to_clipboard_triggered();

    void on_actionPasteReplace_triggered();

    void on_actionStart_Stop_triggered();

    void on_actionSave_triggered();

    void on_actionOpen_triggered();

    void on_actionFont_triggered();

    void on_resetButton_clicked();

    void on_actionPreferences_triggered();

    void setTextInputFontSize(int size);

    void centerAlignment();

    void restorePosition(bool rememberPosition);

    void savePosition();

    void on_actionAbout_Quick_Reader_triggered();

    void on_actionAbout_Qt_triggered();

private:
    Ui::QuickReader *ui;

    int speed = 0;
    int chunks = 0;
    unsigned int step = 0;
    unsigned int chunkCount = 0;
    unsigned int seconds = 0;
    bool running = false;
    bool paused = false;
    bool firstRun = true;
    QTimer *timer;
    QStringList initDelimText;
    QStringList delimText;

    //Preferences initial values
    int textInputFontSize = 9;
    bool rememberTextInputFontSize = false;
    bool rememberMainFont = false;
    bool rememberPosition = false;
    bool rememberWindowDimensions = false;
    int jumpBackChunks = 10;
    int jumpForwardChunks = 10;
    bool rememberWPMSpeed = false;
    bool rememberChunkSize = false;
    bool startWithEmptyTextField = false;
    bool variableSpeedEnabled = false;
    int threshold = 1000;
    int reducedSpeedPercentage = 100;

signals:
    void sendPreferences(int textInputFontSize, bool rememberTextInputFontSize, bool rememberMainFont, bool rememberPosition, bool rememberWindowDimensions, int jumpBackChunks, int jumpForwardChunks,
                         bool rememberWPMSpeed, bool rememberChunkSize, bool startWithEmptyTextField, bool variableSpeedEnabled, int threshold, int reducedSpeedPercentage);
};
#endif // QUICKREADER_H
