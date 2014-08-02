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
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchWindow
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *CercaNomelabel;
    QLineEdit *CercaLineEdit;
    QPushButton *CercaPushButton;
    QTableWidget *ListaTableWidget;

    void setupUi(QDialog *SearchWindow)
    {
        if (SearchWindow->objectName().isEmpty())
            SearchWindow->setObjectName(QString::fromUtf8("SearchWindow"));
        SearchWindow->resize(690, 355);
        widget = new QWidget(SearchWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 40, 511, 262));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CercaNomelabel = new QLabel(widget);
        CercaNomelabel->setObjectName(QString::fromUtf8("CercaNomelabel"));

        horizontalLayout->addWidget(CercaNomelabel);

        CercaLineEdit = new QLineEdit(widget);
        CercaLineEdit->setObjectName(QString::fromUtf8("CercaLineEdit"));

        horizontalLayout->addWidget(CercaLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        CercaPushButton = new QPushButton(widget);
        CercaPushButton->setObjectName(QString::fromUtf8("CercaPushButton"));

        verticalLayout->addWidget(CercaPushButton);

        ListaTableWidget = new QTableWidget(widget);
        if (ListaTableWidget->columnCount() < 5)
            ListaTableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ListaTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ListaTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ListaTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ListaTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        ListaTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        ListaTableWidget->setObjectName(QString::fromUtf8("ListaTableWidget"));

        verticalLayout->addWidget(ListaTableWidget);


        retranslateUi(SearchWindow);

        QMetaObject::connectSlotsByName(SearchWindow);
    } // setupUi

    void retranslateUi(QDialog *SearchWindow)
    {
        SearchWindow->setWindowTitle(QApplication::translate("SearchWindow", "Dialog", 0, QApplication::UnicodeUTF8));
        CercaNomelabel->setText(QApplication::translate("SearchWindow", "Nome Torneo", 0, QApplication::UnicodeUTF8));
        CercaPushButton->setText(QApplication::translate("SearchWindow", "Cerca Torneo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = ListaTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SearchWindow", "Tipo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = ListaTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SearchWindow", "Nome", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = ListaTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SearchWindow", "Giocatori", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = ListaTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SearchWindow", "BuyIn", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = ListaTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("SearchWindow", "Durata", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SearchWindow: public Ui_SearchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWINDOW_H
