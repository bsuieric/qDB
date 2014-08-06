#include "searchwindow.h"
#include "ui_searchwindow.h"

#include "tornei.h"

#include "mainwindow.h"

#include "Container.h"


SearchWindow::SearchWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchWindow)
{
    ui->setupUi(this);
}

void SearchWindow::bindElenco(ElencoTornei * e, QString nomeT){
    nomeTorneo=nomeT;
    el = e;
    setCampiRicerca();
}


SearchWindow::~SearchWindow()
{
    delete ui;
}

void SearchWindow::setCampiRicerca()
{
    ElencoTornei::SmartPtr p=el->searchTorneo(nomeTorneo.toStdString());
    SitAndGo* sit=dynamic_cast<SitAndGo*>(p.getTorneo());
    Cash * cash=dynamic_cast<Cash*>(p.getTorneo());
      if(sit){
         ui->searchBuyInLabel->setText("BuyIn");
         ui->searchNomeEdit->setText(QString::fromStdString(sit->getNome()));
         ui->searchGiocEdit->setText(QString::number(sit->getNumeroGiocatori()));
         ui->searchImportoEdit->setText(QString::number(sit->getTaxPerGiocatore()));
         ui->searchBuyInEdit->setText(QString::number(sit->getBuyIn()));
         ui->searchTipoLabel->setText("Tipo : SitAndGo");
         ui->searchTotaleLabel->setText("Totale da pagare : "+ QString::number(sit->tax())+" euro");
      }
      else
          if(cash){
              ui->searchBuyInLabel->setText("Durata");
              ui->searchNomeEdit->setText(QString::fromStdString(cash->getNome()));
              ui->searchGiocEdit->setText(QString::number(cash->getNumeroGiocatori()));
              ui->searchImportoEdit->setText(QString::number(cash->getTaxPerGiocatore()));
              ui->searchBuyInEdit->setText(QString::number(cash->getDurata()));
              ui->searchTipoLabel->setText("Tipo : Cash");
              ui->searchTotaleLabel->setText("Totale da pagare : "+ QString::number(cash->tax())+" euro");
          }
}

void SearchWindow::resetCampi(){
    ui->searchNomeEdit->setText("");
    ui->searchGiocEdit->setText("");
    ui->searchImportoEdit->setText("");
    ui->searchBuyInEdit->setText("");
    ui->searchTipoLabel->setText("Tipo :");
    ui->searchTotaleLabel->setText("Totale da pagare : ");
}

void SearchWindow::on_searchDeleteButton_clicked()
{
      int reply = QMessageBox::question(this, "Cancellazione Torneo", "Confermi la cancellazione del torneo?",
                                      QMessageBox::Yes, QMessageBox::Cancel);
      if(reply == QMessageBox::Yes){
            resetCampi();
            bool presente=el->deleteTorneo(nomeTorneo.toStdString());
            if(presente==0){
                QMessageBox err;
                err.setText("C'e' stato un errore");
                err.exec();
            }
         this->close();
      }
}



void SearchWindow::on_editNomeButton_clicked()
{
    QString resetNome=ui->searchNomeEdit->text();
    ElencoTornei::SmartPtr ptr=el->searchTorneo(resetNome.toStdString());
    ElencoTornei::SmartPtr cerca=el->searchTorneo(nomeTorneo.toStdString());
    int reply = QMessageBox::question(this, "Modifica Torneo", "Confermi la modifica del torneo?",
                                    QMessageBox::Yes, QMessageBox::Cancel);
    if(reply == QMessageBox::Yes){
            if(ptr!=0)
            {
                ui->searchNomeEdit->setText(nomeTorneo);
                QMessageBox err;
                err.setText("Nome uguale o gia' presente");
                err.exec();
            }
            else{
                SitAndGo* sit=dynamic_cast<SitAndGo*>(cerca.getTorneo());
                Cash* cash=dynamic_cast<Cash*>(cerca.getTorneo());
                if(sit){
                    el->modificaSitAndGo(el->getAccount(el->editTornei(nomeTorneo.toStdString()))).resetNome(resetNome.toStdString());
                    this->setNomeTorneo(resetNome);
                }
                else if(cash){
                    el->modificaCash(el->getAccount(el->editTornei(nomeTorneo.toStdString()))).resetNome(resetNome.toStdString());
                    this->setNomeTorneo(resetNome);
                }
            }
    }
    else
        ui->searchNomeEdit->setText(nomeTorneo);
}


void SearchWindow::on_editGiocButton_clicked()
{
    ElencoTornei::SmartPtr cerca=el->searchTorneo(nomeTorneo.toStdString());
    SitAndGo* sit=dynamic_cast<SitAndGo*>(cerca.getTorneo());
    Cash* cash=dynamic_cast<Cash*>(cerca.getTorneo());
    int reply = QMessageBox::question(this, "Modifica Torneo", "Confermi la modifica del torneo?",
                                    QMessageBox::Yes, QMessageBox::Cancel);
    if(reply == QMessageBox::Yes){
        bool ok;
        int giocatori=ui->searchGiocEdit->text().toInt(&ok);
        if(!ok)
        {
            ui->searchGiocEdit->setText(QString::number(cerca->getNumeroGiocatori()));
            QMessageBox err;
            err.setText("Numero non permesso");
            err.exec();
        }
        else
        {
        if(sit){
            el->modificaSitAndGo(el->getAccount(el->editTornei(nomeTorneo.toStdString()))).resetNumeroGiocatori(giocatori);
            ui->searchTotaleLabel->setText("Totale da pagare : "+ QString::number(sit->tax())+ " euro");
        }
        else
            if(cash){
               el->modificaCash(el->getAccount(el->editTornei(nomeTorneo.toStdString()))).resetNumeroGiocatori(giocatori);
               ui->searchTotaleLabel->setText("Totale da pagare : "+ QString::number(cash->tax())+ " euro");
            }
        }
    }
    else
        ui->searchGiocEdit->setText(QString::number(cerca->getNumeroGiocatori()));

}

void SearchWindow::on_editImportoButton_clicked()
{
    ElencoTornei::SmartPtr cerca=el->searchTorneo(nomeTorneo.toStdString());
    SitAndGo* sit=dynamic_cast<SitAndGo*>(cerca.getTorneo());
    Cash* cash=dynamic_cast<Cash*>(cerca.getTorneo());
    int reply = QMessageBox::question(this, "Modifica Torneo", "Confermi la modifica del torneo?",
                                    QMessageBox::Yes, QMessageBox::Cancel);
    if(reply == QMessageBox::Yes){
        bool ok;
        double importo=ui->searchImportoEdit->text().toDouble(&ok);
        if(!ok){
            ui->searchImportoEdit->setText(QString::number(cerca->getTaxPerGiocatore()));
            QMessageBox err;
            err.setText("Importo non permesso");
            err.exec();
        }
        else{
            if(sit){
                el->modificaSitAndGo(el->getAccount(el->editTornei(nomeTorneo.toStdString()))).resetTax(importo);
                ui->searchTotaleLabel->setText("Totale da pagare : "+ QString::number(sit->tax())+ " euro");
            }
            else
                if(cash){
                    el->modificaCash(el->getAccount(el->editTornei(nomeTorneo.toStdString()))).resetTax(importo);
                    ui->searchTotaleLabel->setText("Totale da pagare : "+ QString::number(cash->tax())+ " euro");
                }
        }
    }
    else
        ui->searchImportoEdit->setText(QString::number(cerca->getTaxPerGiocatore()));
}

void SearchWindow::on_editBuyInButton_clicked()
{
    ElencoTornei::SmartPtr cerca=el->searchTorneo(nomeTorneo.toStdString());
    SitAndGo* sit=dynamic_cast<SitAndGo*>(cerca.getTorneo());
    Cash* cash=dynamic_cast<Cash*>(cerca.getTorneo());
    int reply = QMessageBox::question(this, "Modifica Torneo", "Confermi la modifica del torneo?",
                                    QMessageBox::Yes, QMessageBox::Cancel);
    if(reply == QMessageBox::Yes){
        if(sit){
            bool ok;
            double buy=ui->searchBuyInEdit->text().toDouble(&ok);
            if(!ok){
                ui->searchBuyInEdit->setText(QString::number(sit->getBuyIn()));
                QMessageBox err;
                err.setText("BuyIn non permesso");
                err.exec();
            }
            else{
                el->modificaSitAndGo(el->getAccount(el->editTornei(nomeTorneo.toStdString()))).resetBuyIn(buy);
                ui->searchTotaleLabel->setText("Totale da pagare : "+ QString::number(sit->tax())+ " euro");
            }
        }
        else
            if(cash){
                bool ok;
                int durata=ui->searchBuyInEdit->text().toInt(&ok);
                if(!ok){
                    ui->searchBuyInEdit->setText(QString::number(cash->getDurata()));
                    QMessageBox err;
                    err.setText("Durata non permessa");
                    err.exec();
                }
                else{
                    el->modificaCash(el->getAccount(el->editTornei(nomeTorneo.toStdString()))).resetDurata(durata);
                    ui->searchTotaleLabel->setText("Totale da pagare : "+ QString::number(cash->tax()) + " euro");
                }
            }
    }
    else{
        if(sit)
            ui->searchBuyInEdit->setText(QString::number(sit->getBuyIn()));
        else
            if(cash)
                ui->searchBuyInEdit->setText(QString::number(cash->getDurata()));
    }
}

void SearchWindow::setNomeTorneo(QString reset){
    nomeTorneo=reset;
}
