#ifndef SEARCHWINDOW_H
#define SEARCHWINDOW_H

#include <QDialog>

#include "elencotornei.h"

namespace Ui {
class SearchWindow;
}

class SearchWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SearchWindow(QWidget *parent = 0);
    ~SearchWindow();

private:
    Ui::SearchWindow *ui;
    void populate();
    ElencoTornei *elenco;
};

#endif // SEARCHWINDOW_H
