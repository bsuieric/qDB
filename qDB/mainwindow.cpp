#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "searchwindow.h"
#include "elencotornei.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    elenco(new ElencoTornei)
{
    ui->setupUi(this);
    ui->statusBar->showMessage("Programmazione ad Oggetti 2013/2014 @ UniPD - Suierica Bogdan");
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::addTorneo(){
        //test sull'input
    if(ui->sceltaTorneo->currentText()=="SitAndGo"){
        bool gi, ta, bu;
        QString name = ui->NomeLineEdit->text();
        int giocatori=ui->NumGLineEdit->text().toInt(&gi);
        double tax = ui->ImportoLineEdit->text().toDouble(&ta);
        double buy = ui->BuyInLineEdit->text().toDouble(&bu);
        if(name == "" || !gi || !ta || !bu){
               QMessageBox err;
               err.setText("Sembra che i dati del torneo non siano corretti..");
               err.exec();
               resetCampiDati();
               return false;
        }
        else{
            if(ui->sceltaTorneo->currentText()=="SitAndGo"){
                bool presente=elenco->addSitAndGoIfNotPresent(name.toStdString(),giocatori,tax,buy);
                if(presente){
                    QMessageBox err;
                    err.setText("Il torneo e gia' presente");
                    err.exec();
                    resetCampiDati();
                    return false;
                }

            }
            else {
                QMessageBox err;
                err.setText("Si e' verificato qualche problema con l'inserimento. Il torneo non e' stato creato");
                err.exec();
                resetCampiDati();
                return false;
            }

        QMessageBox info;
        info.setText("Torneo creato e salvato con successo!");
        info.exec();
        resetCampiDati();
        return true;
        }
    }
    else
        if(ui->sceltaTorneo->currentText()=="Cash"){
            bool gi, ta, bu;
            QString name = ui->NomeLineEdit->text();
            int giocatori=ui->NumGLineEdit->text().toInt(&gi);
            double tax = ui->ImportoLineEdit->text().toDouble(&ta);
            double dura = ui->BuyInLineEdit->text().toDouble(&bu);
            if(name == "" || !gi || !ta || !bu){
                   QMessageBox err;
                   err.setText("Sembra che i dati del torneo non siano corretti..");
                   err.exec();
                   resetCampiDati();
                   return false;
            }
            else{
                if(ui->sceltaTorneo->currentText()=="Cash"){
                    bool presente=elenco->addCashIfNotPresent(name.toStdString(),giocatori,tax,dura);
                    if(presente){
                        QMessageBox err;
                        err.setText("Il torneo e gia' presente");
                        err.exec();
                        resetCampiDati();
                        return false;
                    }
                }
                else {
                    QMessageBox err;
                    err.setText("Si e' verificato qualche problema con l'inserimento. Il torneo non e' stato creato");
                    err.exec();
                    resetCampiDati();
                    return false;
                }

            QMessageBox info;
            info.setText("Conto creato e salvato con successo!");
            info.exec();
            emit aggiuntoNuovoTorneo();
            resetCampiDati();
            return true;
            }
        }

}




void MainWindow::on_addTorneo_clicked()
{
    addTorneo();
}


void MainWindow::on_sceltaTorneo_currentIndexChanged(const QString &arg1)
{
    QString line=ui->sceltaTorneo->currentText();
    if(line=="SitAndGo")
        ui->BuyInLabel->setText("BuyIn");
    else
        if(line=="Cash")
            ui->BuyInLabel->setText("Durata");
}

void MainWindow::resetCampiDati(){
    ui->NomeLineEdit->setText("");
    ui->NumGLineEdit->setText("");
    ui->ImportoLineEdit->setText("");
    ui->BuyInLineEdit->setText("");
}


void MainWindow::on_ListaTorneiButton_clicked()
{
    SearchWindow *sw = new SearchWindow;
    sw->bindElenco(elenco);
    //connect(dsa, SIGNAL(infoElencoChanged()), this, SLOT(onReloadInfoConti()));
    sw->show();

}

