/********************************************************************************
** Form generated from reading UI file 'aboutqt.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTQT_H
#define UI_ABOUTQT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutQt
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *AboutQt)
    {
        if (AboutQt->objectName().isEmpty())
            AboutQt->setObjectName(QString::fromUtf8("AboutQt"));
        AboutQt->resize(500, 685);
        AboutQt->setModal(true);
        horizontalLayout_2 = new QHBoxLayout(AboutQt);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AboutQt);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(AboutQt);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);
        label_2->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(AboutQt);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Assets/apply.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(AboutQt);

        QMetaObject::connectSlotsByName(AboutQt);
    } // setupUi

    void retranslateUi(QDialog *AboutQt)
    {
        AboutQt->setWindowTitle(QCoreApplication::translate("AboutQt", "About Qt", nullptr));
        label->setText(QCoreApplication::translate("AboutQt", "<html><head/><body><p><img src=\":/icons/Assets/Qt.svg\"/></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("AboutQt", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">About Qt</span></p><p><span style=\" font-size:10pt;\">This program uses Qt version 5.15.1.</span></p><p><span style=\" font-size:10pt;\">Qt is a C++ toolkit for cross-platform application development.</span></p><p><span style=\" font-size:10pt;\">Qt provides single-source portability across all major desktop operating systems. It is also available for embedded Linux and other embedded and mobile operating systems.</span></p><p><span style=\" font-size:10pt;\">Qt is available under multiple licensing options designed to accommodate the needs of our various users.</span></p><p><span style=\" font-size:10pt;\">Qt licensed under our commercial license agreement is appropriate for development of proprietary/commercial software where you do not want to share any source code with third parties or otherwise cannot comply with the terms of GNU (L)GPL.</span></p><p><span style=\" font-size:10pt;\">Qt licensed under GNU (L)GPL is appropriate for the"
                        " development of Qt applications provided you can comply with the terms and conditions of the respective licenses.</span></p><p><span style=\" font-size:10pt;\">Please see </span><a href=\"qt.io/licensing\"><span style=\" text-decoration: underline; color:#007af4;\">qt.io/licensing</span></a><span style=\" font-size:10pt;\"> for an overview of Qt licensing.</span></p><p><span style=\" font-size:10pt;\">Copyright (C) 2020 The Qt Company Ltd and other contributors.</span></p><p><span style=\" font-size:10pt;\">Qt and the Qt logo are trademarks of The Qt Company Ltd.</span></p><p><span style=\" font-size:10pt;\">Qt is The Qt Company Ltd product developed as an open source project. See </span><a href=\"qt.io\"><span style=\" text-decoration: underline; color:#007af4;\">qt.io</span></a><span style=\" font-size:10pt;\"> for more information</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("AboutQt", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutQt: public Ui_AboutQt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTQT_H
