/********************************************************************************
** Form generated from reading UI file 'searchwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWINDOW_H
#define UI_SEARCHWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchWindow
{
public:
    QLabel *searchTipoLabel;
    QLabel *searchTotaleLabel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *searchLabelNome;
    QLineEdit *searchNomeEdit;
    QPushButton *editNomeButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *searchLabelGioc;
    QLineEdit *searchGiocEdit;
    QPushButton *editGiocButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *searchImportoLabel;
    QLineEdit *searchImportoEdit;
    QPushButton *editImportoButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *searchBuyInLabel;
    QLineEdit *searchBuyInEdit;
    QPushButton *editBuyInButton;
    QPushButton *searchDeleteButton;

    void setupUi(QDialog *SearchWindow)
    {
        if (SearchWindow->objectName().isEmpty())
            SearchWindow->setObjectName(QString::fromUtf8("SearchWindow"));
        SearchWindow->resize(350, 332);
        searchTipoLabel = new QLabel(SearchWindow);
        searchTipoLabel->setObjectName(QString::fromUtf8("searchTipoLabel"));
        searchTipoLabel->setGeometry(QRect(100, 20, 151, 17));
        searchTotaleLabel = new QLabel(SearchWindow);
        searchTotaleLabel->setObjectName(QString::fromUtf8("searchTotaleLabel"));
        searchTotaleLabel->setGeometry(QRect(40, 50, 251, 17));
        layoutWidget = new QWidget(SearchWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 100, 309, 169));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        searchLabelNome = new QLabel(layoutWidget);
        searchLabelNome->setObjectName(QString::fromUtf8("searchLabelNome"));

        horizontalLayout_2->addWidget(searchLabelNome);

        searchNomeEdit = new QLineEdit(layoutWidget);
        searchNomeEdit->setObjectName(QString::fromUtf8("searchNomeEdit"));

        horizontalLayout_2->addWidget(searchNomeEdit);

        editNomeButton = new QPushButton(layoutWidget);
        editNomeButton->setObjectName(QString::fromUtf8("editNomeButton"));

        horizontalLayout_2->addWidget(editNomeButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        searchLabelGioc = new QLabel(layoutWidget);
        searchLabelGioc->setObjectName(QString::fromUtf8("searchLabelGioc"));

        horizontalLayout_3->addWidget(searchLabelGioc);

        searchGiocEdit = new QLineEdit(layoutWidget);
        searchGiocEdit->setObjectName(QString::fromUtf8("searchGiocEdit"));

        horizontalLayout_3->addWidget(searchGiocEdit);

        editGiocButton = new QPushButton(layoutWidget);
        editGiocButton->setObjectName(QString::fromUtf8("editGiocButton"));

        horizontalLayout_3->addWidget(editGiocButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        searchImportoLabel = new QLabel(layoutWidget);
        searchImportoLabel->setObjectName(QString::fromUtf8("searchImportoLabel"));

        horizontalLayout_4->addWidget(searchImportoLabel);

        searchImportoEdit = new QLineEdit(layoutWidget);
        searchImportoEdit->setObjectName(QString::fromUtf8("searchImportoEdit"));

        horizontalLayout_4->addWidget(searchImportoEdit);

        editImportoButton = new QPushButton(layoutWidget);
        editImportoButton->setObjectName(QString::fromUtf8("editImportoButton"));

        horizontalLayout_4->addWidget(editImportoButton);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        searchBuyInLabel = new QLabel(layoutWidget);
        searchBuyInLabel->setObjectName(QString::fromUtf8("searchBuyInLabel"));

        horizontalLayout_5->addWidget(searchBuyInLabel);

        searchBuyInEdit = new QLineEdit(layoutWidget);
        searchBuyInEdit->setObjectName(QString::fromUtf8("searchBuyInEdit"));

        horizontalLayout_5->addWidget(searchBuyInEdit);

        editBuyInButton = new QPushButton(layoutWidget);
        editBuyInButton->setObjectName(QString::fromUtf8("editBuyInButton"));

        horizontalLayout_5->addWidget(editBuyInButton);


        verticalLayout_2->addLayout(horizontalLayout_5);

        searchDeleteButton = new QPushButton(layoutWidget);
        searchDeleteButton->setObjectName(QString::fromUtf8("searchDeleteButton"));

        verticalLayout_2->addWidget(searchDeleteButton);


        retranslateUi(SearchWindow);

        QMetaObject::connectSlotsByName(SearchWindow);
    } // setupUi

    void retranslateUi(QDialog *SearchWindow)
    {
        SearchWindow->setWindowTitle(QApplication::translate("SearchWindow", "Dialog", 0, QApplication::UnicodeUTF8));
        searchTipoLabel->setText(QApplication::translate("SearchWindow", "Tipo Torneo", 0, QApplication::UnicodeUTF8));
        searchTotaleLabel->setText(QApplication::translate("SearchWindow", "Totale da pagare", 0, QApplication::UnicodeUTF8));
        searchLabelNome->setText(QApplication::translate("SearchWindow", "Nome", 0, QApplication::UnicodeUTF8));
        editNomeButton->setText(QApplication::translate("SearchWindow", "Modifica", 0, QApplication::UnicodeUTF8));
        searchLabelGioc->setText(QApplication::translate("SearchWindow", "Giocatori", 0, QApplication::UnicodeUTF8));
        editGiocButton->setText(QApplication::translate("SearchWindow", "Modifica", 0, QApplication::UnicodeUTF8));
        searchImportoLabel->setText(QApplication::translate("SearchWindow", "Importo", 0, QApplication::UnicodeUTF8));
        editImportoButton->setText(QApplication::translate("SearchWindow", "Modifica", 0, QApplication::UnicodeUTF8));
        searchBuyInLabel->setText(QApplication::translate("SearchWindow", "BuyIn", 0, QApplication::UnicodeUTF8));
        editBuyInButton->setText(QApplication::translate("SearchWindow", "Modifica", 0, QApplication::UnicodeUTF8));
        searchDeleteButton->setText(QApplication::translate("SearchWindow", "Elimina", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SearchWindow: public Ui_SearchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWINDOW_H
