#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "elencotornei.h"
#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void aggiuntoNuovoTorneo();
private slots:

    void on_addTorneo_clicked();

    void on_sceltaTorneo_currentIndexChanged(const QString &arg1);

    void on_ListaTorneiButton_clicked();

private:
    Ui::MainWindow *ui;
    ElencoTornei *elenco;
    bool addTorneo();
    void resetCampiDati();
    void elencoTornei();
};

#endif // MAINWINDOW_H
