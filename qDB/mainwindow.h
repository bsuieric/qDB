#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "elencotornei.h"
#include <QMainWindow>
#include <QMessageBox>
#include <QListWidgetItem>

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

    void on_cercaButton_clicked();

    void on_torneiListWidget_itemDoubleClicked(QListWidgetItem *item);

    void changeItemListName(QString,QString);

    void eraseItemList(QString);

private:
    Ui::MainWindow *ui;
    ElencoTornei *elenco;
    bool addTorneo();
    void resetCampiDati();
    void loadTorneiInfo();
    void addToList(QString);
    void launchSearch(ElencoTornei* el, QString nome);

};

#endif // MAINWINDOW_H
