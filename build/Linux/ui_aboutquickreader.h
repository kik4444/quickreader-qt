/********************************************************************************
** Form generated from reading UI file 'aboutquickreader.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTQUICKREADER_H
#define UI_ABOUTQUICKREADER_H

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

class Ui_AboutQuickReader
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

    void setupUi(QDialog *AboutQuickReader)
    {
        if (AboutQuickReader->objectName().isEmpty())
            AboutQuickReader->setObjectName(QString::fromUtf8("AboutQuickReader"));
        AboutQuickReader->setEnabled(true);
        AboutQuickReader->resize(500, 500);
        AboutQuickReader->setModal(true);
        horizontalLayout_2 = new QHBoxLayout(AboutQuickReader);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AboutQuickReader);
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
        label_2 = new QLabel(AboutQuickReader);
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

        pushButton = new QPushButton(AboutQuickReader);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Assets/apply.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(AboutQuickReader);

        QMetaObject::connectSlotsByName(AboutQuickReader);
    } // setupUi

    void retranslateUi(QDialog *AboutQuickReader)
    {
        AboutQuickReader->setWindowTitle(QCoreApplication::translate("AboutQuickReader", "About Quick Reader", nullptr));
        label->setText(QCoreApplication::translate("AboutQuickReader", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:456; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/Assets/quickreader icon.svg\" /></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("AboutQuickReader", "<html><head/><body><p><span style=\" font-weight:600;\">About Quick Reader<br/></span><span style=\" font-weight:400;\">Version 1.0</span></p><p>Quick Reader is a program that enables its user to quickly read through text.</p><p>Quick Reader is free software released under GPL. The source code is available on GitLab.<br/>You should have received a copy of the GNU General Public License along with this program. If not, see <a href=\"http://www.gnu.org/licenses/\"><span style=\" text-decoration: underline; color:#007af4;\">http://www.gnu.org/licenses/</span></a></p><p>This is my first piece of free open source software, so I hope it meets your expectations of quality and may it serve you well.</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("AboutQuickReader", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutQuickReader: public Ui_AboutQuickReader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTQUICKREADER_H
