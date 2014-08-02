/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *sceltaTorneo;
    QHBoxLayout *horizontalLayoutNome;
    QLabel *NomeLabel;
    QLineEdit *NomeLineEdit;
    QHBoxLayout *horizontalLayoutNumG;
    QLabel *NumGLabel;
    QLineEdit *NumGLineEdit;
    QHBoxLayout *horizontalLayoutImporto;
    QLabel *ImportoLabel;
    QLineEdit *ImportoLineEdit;
    QHBoxLayout *horizontalLayoutBuyIn;
    QLabel *BuyInLabel;
    QLineEdit *BuyInLineEdit;
    QPushButton *addTorneo;
    QPushButton *ListaTorneiButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(687, 403);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(151, 32, 277, 202));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        sceltaTorneo = new QComboBox(layoutWidget);
        sceltaTorneo->setObjectName(QString::fromUtf8("sceltaTorneo"));

        verticalLayout->addWidget(sceltaTorneo);

        horizontalLayoutNome = new QHBoxLayout();
        horizontalLayoutNome->setSpacing(6);
        horizontalLayoutNome->setObjectName(QString::fromUtf8("horizontalLayoutNome"));
        NomeLabel = new QLabel(layoutWidget);
        NomeLabel->setObjectName(QString::fromUtf8("NomeLabel"));

        horizontalLayoutNome->addWidget(NomeLabel);

        NomeLineEdit = new QLineEdit(layoutWidget);
        NomeLineEdit->setObjectName(QString::fromUtf8("NomeLineEdit"));

        horizontalLayoutNome->addWidget(NomeLineEdit);


        verticalLayout->addLayout(horizontalLayoutNome);

        horizontalLayoutNumG = new QHBoxLayout();
        horizontalLayoutNumG->setSpacing(6);
        horizontalLayoutNumG->setObjectName(QString::fromUtf8("horizontalLayoutNumG"));
        NumGLabel = new QLabel(layoutWidget);
        NumGLabel->setObjectName(QString::fromUtf8("NumGLabel"));

        horizontalLayoutNumG->addWidget(NumGLabel);

        NumGLineEdit = new QLineEdit(layoutWidget);
        NumGLineEdit->setObjectName(QString::fromUtf8("NumGLineEdit"));

        horizontalLayoutNumG->addWidget(NumGLineEdit);


        verticalLayout->addLayout(horizontalLayoutNumG);

        horizontalLayoutImporto = new QHBoxLayout();
        horizontalLayoutImporto->setSpacing(6);
        horizontalLayoutImporto->setObjectName(QString::fromUtf8("horizontalLayoutImporto"));
        ImportoLabel = new QLabel(layoutWidget);
        ImportoLabel->setObjectName(QString::fromUtf8("ImportoLabel"));

        horizontalLayoutImporto->addWidget(ImportoLabel);

        ImportoLineEdit = new QLineEdit(layoutWidget);
        ImportoLineEdit->setObjectName(QString::fromUtf8("ImportoLineEdit"));

        horizontalLayoutImporto->addWidget(ImportoLineEdit);


        verticalLayout->addLayout(horizontalLayoutImporto);

        horizontalLayoutBuyIn = new QHBoxLayout();
        horizontalLayoutBuyIn->setSpacing(6);
        horizontalLayoutBuyIn->setObjectName(QString::fromUtf8("horizontalLayoutBuyIn"));
        BuyInLabel = new QLabel(layoutWidget);
        BuyInLabel->setObjectName(QString::fromUtf8("BuyInLabel"));

        horizontalLayoutBuyIn->addWidget(BuyInLabel);

        BuyInLineEdit = new QLineEdit(layoutWidget);
        BuyInLineEdit->setObjectName(QString::fromUtf8("BuyInLineEdit"));

        horizontalLayoutBuyIn->addWidget(BuyInLineEdit);


        verticalLayout->addLayout(horizontalLayoutBuyIn);

        addTorneo = new QPushButton(layoutWidget);
        addTorneo->setObjectName(QString::fromUtf8("addTorneo"));

        verticalLayout->addWidget(addTorneo);

        ListaTorneiButton = new QPushButton(centralWidget);
        ListaTorneiButton->setObjectName(QString::fromUtf8("ListaTorneiButton"));
        ListaTorneiButton->setGeometry(QRect(200, 280, 181, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 687, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        sceltaTorneo->clear();
        sceltaTorneo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "SitAndGo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Cash", 0, QApplication::UnicodeUTF8)
        );
        NomeLabel->setText(QApplication::translate("MainWindow", "Nome", 0, QApplication::UnicodeUTF8));
        NumGLabel->setText(QApplication::translate("MainWindow", "Numero Giocatori", 0, QApplication::UnicodeUTF8));
        ImportoLabel->setText(QApplication::translate("MainWindow", "Importo", 0, QApplication::UnicodeUTF8));
        BuyInLabel->setText(QApplication::translate("MainWindow", "BuyIn", 0, QApplication::UnicodeUTF8));
        addTorneo->setText(QApplication::translate("MainWindow", "Aggiungi", 0, QApplication::UnicodeUTF8));
        ListaTorneiButton->setText(QApplication::translate("MainWindow", "Lista Tornei", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
