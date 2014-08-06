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
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
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
    QGroupBox *groupBoxRicerca;
    QPushButton *cercaButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNomeRicerca;
    QLineEdit *lineEditRicerca;
    QLabel *labelInfo;
    QGroupBox *groupBoxInformazioni;
    QLabel *labelAddizionale;
    QLabel *labelTotaleTornei;
    QLabel *labelInfoAdd;
    QLabel *labelinfoTot;
    QMenuBar *menuBar;
    QMenu *menuTornei_di_Poker;
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
        layoutWidget->setGeometry(QRect(30, 30, 277, 202));
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

        groupBoxRicerca = new QGroupBox(centralWidget);
        groupBoxRicerca->setObjectName(QString::fromUtf8("groupBoxRicerca"));
        groupBoxRicerca->setGeometry(QRect(380, 30, 271, 151));
        cercaButton = new QPushButton(groupBoxRicerca);
        cercaButton->setObjectName(QString::fromUtf8("cercaButton"));
        cercaButton->setGeometry(QRect(40, 80, 181, 27));
        widget = new QWidget(groupBoxRicerca);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 247, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelNomeRicerca = new QLabel(widget);
        labelNomeRicerca->setObjectName(QString::fromUtf8("labelNomeRicerca"));

        horizontalLayout->addWidget(labelNomeRicerca);

        lineEditRicerca = new QLineEdit(widget);
        lineEditRicerca->setObjectName(QString::fromUtf8("lineEditRicerca"));

        horizontalLayout->addWidget(lineEditRicerca);

        labelInfo = new QLabel(centralWidget);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setEnabled(true);
        labelInfo->setGeometry(QRect(400, 160, 231, 71));
        labelInfo->setScaledContents(false);
        labelInfo->setWordWrap(true);
        groupBoxInformazioni = new QGroupBox(centralWidget);
        groupBoxInformazioni->setObjectName(QString::fromUtf8("groupBoxInformazioni"));
        groupBoxInformazioni->setGeometry(QRect(70, 240, 531, 91));
        labelAddizionale = new QLabel(groupBoxInformazioni);
        labelAddizionale->setObjectName(QString::fromUtf8("labelAddizionale"));
        labelAddizionale->setGeometry(QRect(350, 30, 67, 17));
        labelTotaleTornei = new QLabel(groupBoxInformazioni);
        labelTotaleTornei->setObjectName(QString::fromUtf8("labelTotaleTornei"));
        labelTotaleTornei->setGeometry(QRect(350, 60, 67, 17));
        labelInfoAdd = new QLabel(groupBoxInformazioni);
        labelInfoAdd->setObjectName(QString::fromUtf8("labelInfoAdd"));
        labelInfoAdd->setGeometry(QRect(10, 30, 331, 17));
        labelinfoTot = new QLabel(groupBoxInformazioni);
        labelinfoTot->setObjectName(QString::fromUtf8("labelinfoTot"));
        labelinfoTot->setGeometry(QRect(10, 60, 301, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 687, 25));
        menuTornei_di_Poker = new QMenu(menuBar);
        menuTornei_di_Poker->setObjectName(QString::fromUtf8("menuTornei_di_Poker"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuTornei_di_Poker->menuAction());

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
        groupBoxRicerca->setTitle(QApplication::translate("MainWindow", "Spazio Ricerca", 0, QApplication::UnicodeUTF8));
        cercaButton->setText(QApplication::translate("MainWindow", "Cerca", 0, QApplication::UnicodeUTF8));
        labelNomeRicerca->setText(QApplication::translate("MainWindow", "Nome Torneo", 0, QApplication::UnicodeUTF8));
        labelInfo->setText(QApplication::translate("MainWindow", "Attraverso la ricerca e' possibile eliminare o modificare il torneo", 0, QApplication::UnicodeUTF8));
        groupBoxInformazioni->setTitle(QApplication::translate("MainWindow", "Informazioni", 0, QApplication::UnicodeUTF8));
        labelAddizionale->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        labelTotaleTornei->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        labelInfoAdd->setText(QApplication::translate("MainWindow", "Per i tornei Cash c'e' un'addizionale unica di :", 0, QApplication::UnicodeUTF8));
        labelinfoTot->setText(QApplication::translate("MainWindow", "Il numero totale di tornei e' :", 0, QApplication::UnicodeUTF8));
        menuTornei_di_Poker->setTitle(QApplication::translate("MainWindow", "Tornei di Poker", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
