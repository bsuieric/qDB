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

void SearchWindow::bindElenco(ElencoTornei * e){
    el = e;
}


SearchWindow::~SearchWindow()
{
    delete ui;
}


void SearchWindow::on_CercaPushButton_clicked()
{
    QString nome=ui->CercaLineEdit->text();
    string nomeT=nome.toStdString();
    ElencoTornei::SmartPtr p=el->searchTorneo(nomeT);
    if(p==0){
        QMessageBox err;
        err.setText("Nessun torneo trovato");
        err.exec();
        resetNome();
    }
    else{
        SitAndGo* sit=dynamic_cast<SitAndGo*>(p.getTorneo());
        Cash * cash=dynamic_cast<Cash*>(p.getTorneo());
        if(sit){
           ui->searchNomeEdit->setText(QString::fromStdString(sit->getNome()));
           ui->searchGiocEdit->setText(QString::number(sit->getNumeroGiocatori()));
           ui->searchImportoEdit->setText(QString::number(sit->getTaxPerGiocatore()));
           ui->searchBuyInEdit->setText(QString::number(sit->getBuyIn()));
           ui->searchTipoLabel->setText("Tipo : SitAndGo");
           ui->searchTotaleLabel->setText("Totale da pagare : "+ QString::number(sit->tax()));
           ui->labelNome->setText(nome);
        }
        else
            if(cash){
                ui->searchBuyInLabel->setText("Durata");
                ui->searchNomeEdit->setText(QString::fromStdString(cash->getNome()));
                ui->searchGiocEdit->setText(QString::number(cash->getNumeroGiocatori()));
                ui->searchImportoEdit->setText(QString::number(cash->getTaxPerGiocatore()));
                ui->searchBuyInEdit->setText(QString::number(cash->getDurata()));
                ui->searchTipoLabel->setText("Tipo : Cash");
                ui->searchTotaleLabel->setText("Totale da pagare : "+ QString::number(cash->tax()));
                ui->labelNome->setText(nome);
            }
    }
}

void SearchWindow::resetNome(){
    ui->CercaLineEdit->setText("");
}

void SearchWindow::resetCampi(){
    ui->searchNomeEdit->setText("");
    ui->searchGiocEdit->setText("");
    ui->searchImportoEdit->setText("");
    ui->searchBuyInEdit->setText("");
    ui->searchTipoLabel->setText("Tipo :");
    ui->searchTotaleLabel->setText("Totale da pagare : ");
    ui->labelNome->setText("Nome");
}

void SearchWindow::on_searchDeleteButton_clicked()
{
    QString nome=ui->searchNomeEdit->text();
    if(nome==""){
        QMessageBox err;
        err.setText("Nome non corretto");
        err.exec();
    }
    else{
        int reply = QMessageBox::question(this, "Cancellazione Torneo", "Confermi la cancellazione del torneo?",
                                      QMessageBox::Yes, QMessageBox::Cancel);
        if(reply == QMessageBox::Yes){
            resetCampi();
            resetNome();
            bool presente=el->deleteTorneo(nome.toStdString());
            if(presente==0){
                QMessageBox err;
                err.setText("Nessun torneo trovato");
                err.exec();
            }

        }
    }
}



void SearchWindow::on_editNomeButton_clicked()
{
    ElencoTornei::SmartPtr ptr=el->searchTorneo(ui->searchNomeEdit->text().toStdString());
    ElencoTornei::SmartPtr cerca=el->searchTorneo(ui->CercaLineEdit->text().toStdString());
        if(ptr!=0)
        {
            QMessageBox info;
            info.setText("Nome uguale o gia' presente");
            info.exec();
        }
        else{
            SitAndGo* sit=dynamic_cast<SitAndGo*>(cerca.getTorneo());
            Cash* cash=dynamic_cast<Cash*>(cerca.getTorneo());
            QString nome=ui->labelNome->text();
            QString resetNome=ui->searchNomeEdit->text();
            if(sit)
                el->modificaSitAndGo(el->getAccount(el->editTornei(nome.toStdString()))).resetNome(resetNome.toStdString());
            else if(cash)
                el->modificaCash(el->getAccount(el->editTornei(nome.toStdString()))).resetNome(resetNome.toStdString());

        }
}


void SearchWindow::on_editGiocButton_clicked()
{
    ElencoTornei::SmartPtr cerca=el->searchTorneo(ui->CercaLineEdit->text().toStdString());
    SitAndGo* sit=dynamic_cast<SitAndGo*>(cerca.getTorneo());
    Cash* cash=dynamic_cast<Cash*>(cerca.getTorneo());
    QString nome=ui->CercaLineEdit->text();
    int giocatori=ui->searchGiocEdit->text().toInt();
    if(sit)
        el->modificaSitAndGo(el->getAccount(el->editTornei(nome.toStdString()))).resetNumeroGiocatori(giocatori);
    else
        if(cash)
            el->modificaCash(el->getAccount(el->editTornei(nome.toStdString()))).resetNumeroGiocatori(giocatori);
}

void SearchWindow::on_editImportoButton_clicked()
{
    ElencoTornei::SmartPtr cerca=el->searchTorneo(ui->CercaLineEdit->text().toStdString());
    SitAndGo* sit=dynamic_cast<SitAndGo*>(cerca.getTorneo());
    Cash* cash=dynamic_cast<Cash*>(cerca.getTorneo());
    QString nome=ui->CercaLineEdit->text();
    double importo=ui->searchImportoEdit->text().toDouble();
    if(sit)
        el->modificaSitAndGo(el->getAccount(el->editTornei(nome.toStdString()))).resetTax(importo);
    else
        if(cash)
            el->modificaCash(el->getAccount(el->editTornei(nome.toStdString()))).resetTax(importo);
}

void SearchWindow::on_editBuyInButton_clicked()
{
    ElencoTornei::SmartPtr cerca=el->searchTorneo(ui->CercaLineEdit->text().toStdString());
    SitAndGo* sit=dynamic_cast<SitAndGo*>(cerca.getTorneo());
    Cash* cash=dynamic_cast<Cash*>(cerca.getTorneo());
    QString nome=ui->CercaLineEdit->text();
    if(sit){
        double buy=ui->searchBuyInEdit->text().toDouble();
        el->modificaSitAndGo(el->getAccount(el->editTornei(nome.toStdString()))).resetBuyIn(buy);
    }
    else
        if(cash){
            int durata=ui->searchBuyInEdit->text().toInt();
            el->modificaCash(el->getAccount(el->editTornei(nome.toStdString()))).resetDurata(durata);
        }
}
