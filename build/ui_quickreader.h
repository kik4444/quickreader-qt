/********************************************************************************
** Form generated from reading UI file 'quickreader.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUICKREADER_H
#define UI_QUICKREADER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuickReader
{
public:
    QAction *actionSave;
    QAction *actionOpen;
    QAction *actionPasteReplace;
    QAction *actionPreferences;
    QAction *actionJump_back;
    QAction *actionJump_forward;
    QAction *actionStart_Stop;
    QAction *actionFont;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCopy_to_clipboard;
    QAction *actionAbout_Quick_Reader;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *textLV;
    QTextEdit *textEdit;
    QLabel *currentWord;
    QVBoxLayout *mainControlsLV;
    QHBoxLayout *wpmLH;
    QSpacerItem *horizontalSpacer;
    QLabel *wpmLabel;
    QSpinBox *wpmSpinBox;
    QLabel *chunkLabel;
    QSpinBox *chunkSpinBox;
    QPushButton *resetButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *sliderLH;
    QLabel *chunkIndex;
    QFrame *line;
    QLabel *duration;
    QFrame *line_2;
    QSlider *horizontalSlider;
    QHBoxLayout *buttonsLH;
    QPushButton *stopButton;
    QPushButton *restartButton;
    QPushButton *startButton;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuControls;
    QMenu *menuView;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QuickReader)
    {
        if (QuickReader->objectName().isEmpty())
            QuickReader->setObjectName(QString::fromUtf8("QuickReader"));
        QuickReader->resize(682, 537);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Assets/quickreader icon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QuickReader->setWindowIcon(icon);
        actionSave = new QAction(QuickReader);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/Assets/save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionOpen = new QAction(QuickReader);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/Assets/open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionPasteReplace = new QAction(QuickReader);
        actionPasteReplace->setObjectName(QString::fromUtf8("actionPasteReplace"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/Assets/paste.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPasteReplace->setIcon(icon3);
        actionPreferences = new QAction(QuickReader);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionPreferences->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/Assets/preferences.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreferences->setIcon(icon4);
        actionJump_back = new QAction(QuickReader);
        actionJump_back->setObjectName(QString::fromUtf8("actionJump_back"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/Assets/back.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionJump_back->setIcon(icon5);
        actionJump_forward = new QAction(QuickReader);
        actionJump_forward->setObjectName(QString::fromUtf8("actionJump_forward"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/Assets/forward.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionJump_forward->setIcon(icon6);
        actionStart_Stop = new QAction(QuickReader);
        actionStart_Stop->setObjectName(QString::fromUtf8("actionStart_Stop"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/Assets/play.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart_Stop->setIcon(icon7);
        actionFont = new QAction(QuickReader);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/Assets/font.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon8);
        actionUndo = new QAction(QuickReader);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/Assets/undo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon9);
        actionRedo = new QAction(QuickReader);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/Assets/redo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon10);
        actionCopy_to_clipboard = new QAction(QuickReader);
        actionCopy_to_clipboard->setObjectName(QString::fromUtf8("actionCopy_to_clipboard"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/Assets/copy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy_to_clipboard->setIcon(icon11);
        actionAbout_Quick_Reader = new QAction(QuickReader);
        actionAbout_Quick_Reader->setObjectName(QString::fromUtf8("actionAbout_Quick_Reader"));
        actionAbout_Quick_Reader->setIcon(icon);
        actionAbout_Qt = new QAction(QuickReader);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/Assets/Qt.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Qt->setIcon(icon12);
        centralwidget = new QWidget(QuickReader);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textLV = new QVBoxLayout();
        textLV->setObjectName(QString::fromUtf8("textLV"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setTextInteractionFlags(Qt::TextEditorInteraction);

        textLV->addWidget(textEdit);

        currentWord = new QLabel(centralwidget);
        currentWord->setObjectName(QString::fromUtf8("currentWord"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(currentWord->sizePolicy().hasHeightForWidth());
        currentWord->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(36);
        currentWord->setFont(font);
        currentWord->setAlignment(Qt::AlignCenter);
        currentWord->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        textLV->addWidget(currentWord);


        verticalLayout->addLayout(textLV);

        mainControlsLV = new QVBoxLayout();
        mainControlsLV->setObjectName(QString::fromUtf8("mainControlsLV"));
        wpmLH = new QHBoxLayout();
        wpmLH->setObjectName(QString::fromUtf8("wpmLH"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        wpmLH->addItem(horizontalSpacer);

        wpmLabel = new QLabel(centralwidget);
        wpmLabel->setObjectName(QString::fromUtf8("wpmLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wpmLabel->sizePolicy().hasHeightForWidth());
        wpmLabel->setSizePolicy(sizePolicy1);
        wpmLabel->setAlignment(Qt::AlignCenter);

        wpmLH->addWidget(wpmLabel);

        wpmSpinBox = new QSpinBox(centralwidget);
        wpmSpinBox->setObjectName(QString::fromUtf8("wpmSpinBox"));
        sizePolicy1.setHeightForWidth(wpmSpinBox->sizePolicy().hasHeightForWidth());
        wpmSpinBox->setSizePolicy(sizePolicy1);
        wpmSpinBox->setMinimum(60);
        wpmSpinBox->setMaximum(1000);
        wpmSpinBox->setSingleStep(10);
        wpmSpinBox->setValue(300);

        wpmLH->addWidget(wpmSpinBox);

        chunkLabel = new QLabel(centralwidget);
        chunkLabel->setObjectName(QString::fromUtf8("chunkLabel"));
        sizePolicy1.setHeightForWidth(chunkLabel->sizePolicy().hasHeightForWidth());
        chunkLabel->setSizePolicy(sizePolicy1);
        chunkLabel->setAlignment(Qt::AlignCenter);

        wpmLH->addWidget(chunkLabel);

        chunkSpinBox = new QSpinBox(centralwidget);
        chunkSpinBox->setObjectName(QString::fromUtf8("chunkSpinBox"));
        sizePolicy1.setHeightForWidth(chunkSpinBox->sizePolicy().hasHeightForWidth());
        chunkSpinBox->setSizePolicy(sizePolicy1);
        chunkSpinBox->setMinimum(1);
        chunkSpinBox->setMaximum(10);
        chunkSpinBox->setSingleStep(1);
        chunkSpinBox->setValue(1);

        wpmLH->addWidget(chunkSpinBox);

        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/Assets/reset.svg"), QSize(), QIcon::Normal, QIcon::Off);
        resetButton->setIcon(icon13);

        wpmLH->addWidget(resetButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        wpmLH->addItem(horizontalSpacer_2);


        mainControlsLV->addLayout(wpmLH);

        sliderLH = new QHBoxLayout();
        sliderLH->setObjectName(QString::fromUtf8("sliderLH"));
        chunkIndex = new QLabel(centralwidget);
        chunkIndex->setObjectName(QString::fromUtf8("chunkIndex"));
        sizePolicy1.setHeightForWidth(chunkIndex->sizePolicy().hasHeightForWidth());
        chunkIndex->setSizePolicy(sizePolicy1);
        chunkIndex->setAlignment(Qt::AlignCenter);

        sliderLH->addWidget(chunkIndex);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        sliderLH->addWidget(line);

        duration = new QLabel(centralwidget);
        duration->setObjectName(QString::fromUtf8("duration"));
        sizePolicy1.setHeightForWidth(duration->sizePolicy().hasHeightForWidth());
        duration->setSizePolicy(sizePolicy1);

        sliderLH->addWidget(duration);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        sliderLH->addWidget(line_2);

        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setEnabled(false);
        horizontalSlider->setCursor(QCursor(Qt::OpenHandCursor));
        horizontalSlider->setMouseTracking(false);
        horizontalSlider->setTracking(false);
        horizontalSlider->setOrientation(Qt::Horizontal);

        sliderLH->addWidget(horizontalSlider);


        mainControlsLV->addLayout(sliderLH);

        buttonsLH = new QHBoxLayout();
        buttonsLH->setObjectName(QString::fromUtf8("buttonsLH"));
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setEnabled(false);
        stopButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/Assets/stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon14);

        buttonsLH->addWidget(stopButton);

        restartButton = new QPushButton(centralwidget);
        restartButton->setObjectName(QString::fromUtf8("restartButton"));
        restartButton->setEnabled(false);
        restartButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/Assets/restart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        restartButton->setIcon(icon15);

        buttonsLH->addWidget(restartButton);

        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setCursor(QCursor(Qt::PointingHandCursor));
        startButton->setIcon(icon7);

        buttonsLH->addWidget(startButton);


        mainControlsLV->addLayout(buttonsLH);


        verticalLayout->addLayout(mainControlsLV);

        QuickReader->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QuickReader);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 682, 28));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuControls = new QMenu(menubar);
        menuControls->setObjectName(QString::fromUtf8("menuControls"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        QuickReader->setMenuBar(menubar);
        statusbar = new QStatusBar(QuickReader);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QuickReader->setStatusBar(statusbar);
        toolBar = new QToolBar(QuickReader);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QuickReader->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuControls->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionOpen);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionCopy_to_clipboard);
        menuEdit->addAction(actionPasteReplace);
        menuEdit->addAction(actionPreferences);
        menuControls->addAction(actionStart_Stop);
        menuControls->addAction(actionJump_back);
        menuControls->addAction(actionJump_forward);
        menuView->addAction(actionFont);
        menuHelp->addAction(actionAbout_Quick_Reader);
        menuHelp->addAction(actionAbout_Qt);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionCopy_to_clipboard);
        toolBar->addAction(actionPasteReplace);
        toolBar->addAction(actionPreferences);

        retranslateUi(QuickReader);

        QMetaObject::connectSlotsByName(QuickReader);
    } // setupUi

    void retranslateUi(QMainWindow *QuickReader)
    {
        QuickReader->setWindowTitle(QCoreApplication::translate("QuickReader", "Quick Reader", nullptr));
        actionSave->setText(QCoreApplication::translate("QuickReader", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("QuickReader", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("QuickReader", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("QuickReader", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPasteReplace->setText(QCoreApplication::translate("QuickReader", "Paste and replace", nullptr));
#if QT_CONFIG(shortcut)
        actionPasteReplace->setShortcut(QCoreApplication::translate("QuickReader", "Ctrl+Shift+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPreferences->setText(QCoreApplication::translate("QuickReader", "Preferences", nullptr));
#if QT_CONFIG(shortcut)
        actionPreferences->setShortcut(QCoreApplication::translate("QuickReader", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionJump_back->setText(QCoreApplication::translate("QuickReader", "Jump back", nullptr));
#if QT_CONFIG(shortcut)
        actionJump_back->setShortcut(QCoreApplication::translate("QuickReader", "Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionJump_forward->setText(QCoreApplication::translate("QuickReader", "Jump forward", nullptr));
#if QT_CONFIG(shortcut)
        actionJump_forward->setShortcut(QCoreApplication::translate("QuickReader", "Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStart_Stop->setText(QCoreApplication::translate("QuickReader", "Start/Stop", nullptr));
#if QT_CONFIG(shortcut)
        actionStart_Stop->setShortcut(QCoreApplication::translate("QuickReader", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFont->setText(QCoreApplication::translate("QuickReader", "Change main font", nullptr));
#if QT_CONFIG(shortcut)
        actionFont->setShortcut(QCoreApplication::translate("QuickReader", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("QuickReader", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("QuickReader", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("QuickReader", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("QuickReader", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy_to_clipboard->setText(QCoreApplication::translate("QuickReader", "Copy to clipboard", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy_to_clipboard->setShortcut(QCoreApplication::translate("QuickReader", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout_Quick_Reader->setText(QCoreApplication::translate("QuickReader", "About Quick Reader", nullptr));
#if QT_CONFIG(shortcut)
        actionAbout_Quick_Reader->setShortcut(QCoreApplication::translate("QuickReader", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout_Qt->setText(QCoreApplication::translate("QuickReader", "About Qt", nullptr));
#if QT_CONFIG(shortcut)
        actionAbout_Qt->setShortcut(QCoreApplication::translate("QuickReader", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        textEdit->setHtml(QCoreApplication::translate("QuickReader", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:456; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">Welcome to &quot;Quick Reader&quot;. Press start to begin reading quickly.</span></p></body></html>", nullptr));
        currentWord->setText(QCoreApplication::translate("QuickReader", "Quick Reader", nullptr));
        wpmLabel->setText(QCoreApplication::translate("QuickReader", "Words per minute:", nullptr));
        chunkLabel->setText(QCoreApplication::translate("QuickReader", "Chunk size:", nullptr));
        resetButton->setText(QCoreApplication::translate("QuickReader", "Reset", nullptr));
        chunkIndex->setText(QCoreApplication::translate("QuickReader", "Chunk 0 of 0", nullptr));
        duration->setText(QCoreApplication::translate("QuickReader", "Duration: 0s", nullptr));
        stopButton->setText(QCoreApplication::translate("QuickReader", "Stop", nullptr));
        restartButton->setText(QCoreApplication::translate("QuickReader", "Restart", nullptr));
        startButton->setText(QCoreApplication::translate("QuickReader", "Start", nullptr));
        menuFile->setTitle(QCoreApplication::translate("QuickReader", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("QuickReader", "Edit", nullptr));
        menuControls->setTitle(QCoreApplication::translate("QuickReader", "Controls", nullptr));
        menuView->setTitle(QCoreApplication::translate("QuickReader", "View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("QuickReader", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("QuickReader", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuickReader: public Ui_QuickReader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUICKREADER_H
