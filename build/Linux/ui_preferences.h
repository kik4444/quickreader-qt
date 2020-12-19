/********************************************************************************
** Form generated from reading UI file 'preferences.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Preferences
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *textInputFontSizeSpinBox;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *rememberTIFSCheckBox;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *rememberMainFontCheckBox;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *rememberPositionCheckBox;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *clearAllSavedButton;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_15;
    QCheckBox *rememberWindowDimensionsCheckBox;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_10;
    QSpinBox *jumpBackChunksSpinBox;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_11;
    QSpinBox *jumpForwardChunksSpinBox;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *rememberWPMSpeedCheckBox;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *rememberChunkSizeCheckBox;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_14;
    QCheckBox *startWithEmptyTextFieldCheckBox;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *variableSpeedCheckBox;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *thresholdSpinBox;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *reducedSpeedSpinBox;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *applyButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *Preferences)
    {
        if (Preferences->objectName().isEmpty())
            Preferences->setObjectName(QString::fromUtf8("Preferences"));
        Preferences->resize(335, 739);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Assets/preferences.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Preferences->setWindowIcon(icon);
        Preferences->setSizeGripEnabled(true);
        Preferences->setModal(true);
        verticalLayout = new QVBoxLayout(Preferences);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        textInputFontSizeSpinBox = new QSpinBox(Preferences);
        textInputFontSizeSpinBox->setObjectName(QString::fromUtf8("textInputFontSizeSpinBox"));
        textInputFontSizeSpinBox->setMinimum(1);
        textInputFontSizeSpinBox->setMaximum(72);
        textInputFontSizeSpinBox->setValue(9);

        horizontalLayout_2->addWidget(textInputFontSizeSpinBox);

        label = new QLabel(Preferences);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 10, -1, -1);
        rememberTIFSCheckBox = new QCheckBox(Preferences);
        rememberTIFSCheckBox->setObjectName(QString::fromUtf8("rememberTIFSCheckBox"));

        horizontalLayout_6->addWidget(rememberTIFSCheckBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 10, -1, -1);
        rememberMainFontCheckBox = new QCheckBox(Preferences);
        rememberMainFontCheckBox->setObjectName(QString::fromUtf8("rememberMainFontCheckBox"));

        horizontalLayout_9->addWidget(rememberMainFontCheckBox);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, 10, -1, -1);
        rememberPositionCheckBox = new QCheckBox(Preferences);
        rememberPositionCheckBox->setObjectName(QString::fromUtf8("rememberPositionCheckBox"));

        horizontalLayout_12->addWidget(rememberPositionCheckBox);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(-1, 10, -1, -1);
        clearAllSavedButton = new QPushButton(Preferences);
        clearAllSavedButton->setObjectName(QString::fromUtf8("clearAllSavedButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/Assets/clear.svg"), QSize(), QIcon::Normal, QIcon::Off);
        clearAllSavedButton->setIcon(icon1);

        horizontalLayout_13->addWidget(clearAllSavedButton);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_13);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(-1, 10, -1, -1);
        rememberWindowDimensionsCheckBox = new QCheckBox(Preferences);
        rememberWindowDimensionsCheckBox->setObjectName(QString::fromUtf8("rememberWindowDimensionsCheckBox"));

        horizontalLayout_15->addWidget(rememberWindowDimensionsCheckBox);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_15);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 10, -1, -1);
        jumpBackChunksSpinBox = new QSpinBox(Preferences);
        jumpBackChunksSpinBox->setObjectName(QString::fromUtf8("jumpBackChunksSpinBox"));
        jumpBackChunksSpinBox->setMinimum(1);
        jumpBackChunksSpinBox->setMaximum(100);
        jumpBackChunksSpinBox->setValue(10);

        horizontalLayout_10->addWidget(jumpBackChunksSpinBox);

        label_4 = new QLabel(Preferences);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_10->addWidget(label_4);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, 10, -1, -1);
        jumpForwardChunksSpinBox = new QSpinBox(Preferences);
        jumpForwardChunksSpinBox->setObjectName(QString::fromUtf8("jumpForwardChunksSpinBox"));
        jumpForwardChunksSpinBox->setMinimum(1);
        jumpForwardChunksSpinBox->setMaximum(100);
        jumpForwardChunksSpinBox->setValue(10);

        horizontalLayout_11->addWidget(jumpForwardChunksSpinBox);

        label_5 = new QLabel(Preferences);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_11->addWidget(label_5);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 10, -1, -1);
        rememberWPMSpeedCheckBox = new QCheckBox(Preferences);
        rememberWPMSpeedCheckBox->setObjectName(QString::fromUtf8("rememberWPMSpeedCheckBox"));

        horizontalLayout_8->addWidget(rememberWPMSpeedCheckBox);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 10, -1, -1);
        rememberChunkSizeCheckBox = new QCheckBox(Preferences);
        rememberChunkSizeCheckBox->setObjectName(QString::fromUtf8("rememberChunkSizeCheckBox"));

        horizontalLayout_7->addWidget(rememberChunkSizeCheckBox);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(-1, 10, -1, -1);
        startWithEmptyTextFieldCheckBox = new QCheckBox(Preferences);
        startWithEmptyTextFieldCheckBox->setObjectName(QString::fromUtf8("startWithEmptyTextFieldCheckBox"));

        horizontalLayout_14->addWidget(startWithEmptyTextFieldCheckBox);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 10, -1, -1);
        variableSpeedCheckBox = new QCheckBox(Preferences);
        variableSpeedCheckBox->setObjectName(QString::fromUtf8("variableSpeedCheckBox"));

        horizontalLayout_4->addWidget(variableSpeedCheckBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 10, -1, -1);
        thresholdSpinBox = new QSpinBox(Preferences);
        thresholdSpinBox->setObjectName(QString::fromUtf8("thresholdSpinBox"));
        thresholdSpinBox->setEnabled(false);
        thresholdSpinBox->setMinimum(2);
        thresholdSpinBox->setMaximum(1000);

        horizontalLayout_3->addWidget(thresholdSpinBox);

        label_2 = new QLabel(Preferences);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(false);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 10, -1, -1);
        reducedSpeedSpinBox = new QSpinBox(Preferences);
        reducedSpeedSpinBox->setObjectName(QString::fromUtf8("reducedSpeedSpinBox"));
        reducedSpeedSpinBox->setEnabled(false);
        reducedSpeedSpinBox->setMinimum(1);
        reducedSpeedSpinBox->setMaximum(100);
        reducedSpeedSpinBox->setValue(100);

        horizontalLayout_5->addWidget(reducedSpeedSpinBox);

        label_3 = new QLabel(Preferences);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(false);

        horizontalLayout_5->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        applyButton = new QPushButton(Preferences);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/Assets/apply.svg"), QSize(), QIcon::Normal, QIcon::Off);
        applyButton->setIcon(icon2);

        horizontalLayout->addWidget(applyButton);

        cancelButton = new QPushButton(Preferences);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/Assets/cancel.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon3);

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Preferences);

        QMetaObject::connectSlotsByName(Preferences);
    } // setupUi

    void retranslateUi(QDialog *Preferences)
    {
        Preferences->setWindowTitle(QCoreApplication::translate("Preferences", "Preferences", nullptr));
        label->setText(QCoreApplication::translate("Preferences", "Text input font size", nullptr));
        rememberTIFSCheckBox->setText(QCoreApplication::translate("Preferences", "Remember text input font size", nullptr));
        rememberMainFontCheckBox->setText(QCoreApplication::translate("Preferences", "Remember main font", nullptr));
        rememberPositionCheckBox->setText(QCoreApplication::translate("Preferences", "Remember position in text on exit", nullptr));
        clearAllSavedButton->setText(QCoreApplication::translate("Preferences", "Clear all saved positions", nullptr));
        rememberWindowDimensionsCheckBox->setText(QCoreApplication::translate("Preferences", "Remember window dimensions", nullptr));
        label_4->setText(QCoreApplication::translate("Preferences", "Jump back  chunks", nullptr));
        label_5->setText(QCoreApplication::translate("Preferences", "Jump forward  chunks", nullptr));
        rememberWPMSpeedCheckBox->setText(QCoreApplication::translate("Preferences", "Remember words per minute speed", nullptr));
        rememberChunkSizeCheckBox->setText(QCoreApplication::translate("Preferences", "Remember chunk size", nullptr));
        startWithEmptyTextFieldCheckBox->setText(QCoreApplication::translate("Preferences", "Start with an empty text field", nullptr));
        variableSpeedCheckBox->setText(QCoreApplication::translate("Preferences", "Enable variable speed", nullptr));
        label_2->setText(QCoreApplication::translate("Preferences", "Chunk character count threshold", nullptr));
        label_3->setText(QCoreApplication::translate("Preferences", "Reduced speed percentage", nullptr));
        applyButton->setText(QCoreApplication::translate("Preferences", "Apply", nullptr));
        cancelButton->setText(QCoreApplication::translate("Preferences", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Preferences: public Ui_Preferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
