#ifndef SEARCHWINDOW_H
#define SEARCHWINDOW_H

#include <QDialog>

#include "elencotornei.h"
#include "Container.h"
#include "tornei.h"


namespace Ui {
class SearchWindow;
}

class SearchWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SearchWindow(QWidget *parent = 0);
    ~SearchWindow();

   void bindElenco(ElencoTornei*);


private slots:
    void on_CercaPushButton_clicked();

    void on_searchDeleteButton_clicked();

    void on_editNomeButton_clicked();

    void on_editGiocButton_clicked();

    void on_editImportoButton_clicked();

    void on_editBuyInButton_clicked();

private:
    Ui::SearchWindow *ui;

    ElencoTornei *el;

    void resetNome();

    void resetCampi();

};

#endif // SEARCHWINDOW_H
