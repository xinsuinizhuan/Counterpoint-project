/********************************************************************************
** Form generated from reading UI file 'newstaffdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSTAFFDIALOG_H
#define UI_NEWSTAFFDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewStaffDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *trebleRadioButton;
    QRadioButton *altoRadioButton;
    QRadioButton *tenorRadioButton;
    QRadioButton *bassRadioButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewStaffDialog)
    {
        if (NewStaffDialog->objectName().isEmpty())
            NewStaffDialog->setObjectName(QStringLiteral("NewStaffDialog"));
        NewStaffDialog->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(NewStaffDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(NewStaffDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 89, 151));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        trebleRadioButton = new QRadioButton(layoutWidget);
        trebleRadioButton->setObjectName(QStringLiteral("trebleRadioButton"));

        verticalLayout->addWidget(trebleRadioButton);

        altoRadioButton = new QRadioButton(layoutWidget);
        altoRadioButton->setObjectName(QStringLiteral("altoRadioButton"));

        verticalLayout->addWidget(altoRadioButton);

        tenorRadioButton = new QRadioButton(layoutWidget);
        tenorRadioButton->setObjectName(QStringLiteral("tenorRadioButton"));

        verticalLayout->addWidget(tenorRadioButton);

        bassRadioButton = new QRadioButton(layoutWidget);
        bassRadioButton->setObjectName(QStringLiteral("bassRadioButton"));

        verticalLayout->addWidget(bassRadioButton);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(NewStaffDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_2);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(NewStaffDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        retranslateUi(NewStaffDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewStaffDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewStaffDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewStaffDialog);
    } // setupUi

    void retranslateUi(QDialog *NewStaffDialog)
    {
        NewStaffDialog->setWindowTitle(QApplication::translate("NewStaffDialog", "\303\232j kottasor", 0));
        groupBox->setTitle(QApplication::translate("NewStaffDialog", "Kulcs", 0));
        trebleRadioButton->setText(QApplication::translate("NewStaffDialog", "Violin kulcs", 0));
        altoRadioButton->setText(QApplication::translate("NewStaffDialog", "Alt kulcs", 0));
        tenorRadioButton->setText(QApplication::translate("NewStaffDialog", "Tenor kulcs", 0));
        bassRadioButton->setText(QApplication::translate("NewStaffDialog", "Basszus kulcs", 0));
        groupBox_2->setTitle(QApplication::translate("NewStaffDialog", "El\305\221jegyz\303\251s", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("NewStaffDialog", "Semmi", 0)
         << QApplication::translate("NewStaffDialog", "1 #", 0)
         << QApplication::translate("NewStaffDialog", "1 b", 0)
         << QApplication::translate("NewStaffDialog", "2 #", 0)
         << QApplication::translate("NewStaffDialog", "2 b", 0)
         << QApplication::translate("NewStaffDialog", "3 #", 0)
         << QApplication::translate("NewStaffDialog", "3 b", 0)
         << QApplication::translate("NewStaffDialog", "4 #", 0)
         << QApplication::translate("NewStaffDialog", "4 b", 0)
         << QApplication::translate("NewStaffDialog", "5 #", 0)
         << QApplication::translate("NewStaffDialog", "5 b", 0)
         << QApplication::translate("NewStaffDialog", "6 #", 0)
         << QApplication::translate("NewStaffDialog", "6 b", 0)
         << QApplication::translate("NewStaffDialog", "7 #", 0)
         << QApplication::translate("NewStaffDialog", "7 b", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class NewStaffDialog: public Ui_NewStaffDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSTAFFDIALOG_H
