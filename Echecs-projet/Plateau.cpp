#include"menu.h"
#include"Plateau.h"
#include <QObject>
#include <QWidget>
#include <QLabel>
#include<QApplication>
#include<QMovie>
#include<QPushButton>
#include<QGridLayout>
#include<QMessageBox>
#include<QIcon>

Plateau::Plateau(){
    this->setWindowIcon(QIcon("Reine_noir.png"));
    this->setFixedSize(700,700);

    QLabel *Plateau_image = new QLabel(this);
    Plateau_image->setPixmap(QPixmap("Plateau.png"));
    Plateau_image->setFixedSize(600,600);
    Plateau_image->move(50,50);

    QLabel *TourGb = new QLabel(this);
    TourGb->setPixmap(QPixmap("Tour_blanc.png"));
    TourGb->setFixedSize(75,75);
    QLabel *CavalGb = new QLabel(this);
    CavalGb->setPixmap(QPixmap("Caval_blanc.png"));
    CavalGb->setFixedSize(75,75);
    QLabel *FouGb = new QLabel(this);
    FouGb->setPixmap(QPixmap("Fou_blanc.png"));
    FouGb->setFixedSize(75,75);
    QLabel *Reineb = new QLabel(this);
    Reineb->setPixmap(QPixmap("Reine_blanc.png"));
    Reineb->setFixedSize(75,75);
    QLabel *Roib = new QLabel(this);
    Roib->setPixmap(QPixmap("Roi_blanc.png"));
    Roib->setFixedSize(75,75);
    QLabel *FouDb = new QLabel(this);
    FouDb->setPixmap(QPixmap("Fou_blanc.png"));
    FouDb->setFixedSize(75,75);
    QLabel *CavalDb = new QLabel(this);
    CavalDb->setPixmap(QPixmap("Caval_blanc.png"));
    CavalDb->setFixedSize(75,75);
    QLabel *TourDb = new QLabel(this);
    TourDb->setPixmap(QPixmap("Tour_blanc.png"));
    TourDb->setFixedSize(75,75);
    QLabel *Piont1b = new QLabel(this);
    Piont1b->setPixmap(QPixmap("Pion_blanc.png"));
    Piont1b->setFixedSize(75,75);
    QLabel *Piont2b = new QLabel(this);
    Piont2b->setPixmap(QPixmap("Pion_blanc.png"));
    Piont2b->setFixedSize(75,75);
    QLabel *Piont3b = new QLabel(this);
    Piont3b->setPixmap(QPixmap("Pion_blanc.png"));
    Piont3b->setFixedSize(75,75);
    QLabel *Piont4b = new QLabel(this);
    Piont4b->setPixmap(QPixmap("Pion_blanc.png"));
    Piont4b->setFixedSize(75,75);
    QLabel *Piont5b = new QLabel(this);
    Piont5b->setPixmap(QPixmap("Pion_blanc.png"));
    Piont5b->setFixedSize(75,75);
    QLabel *Piont6b = new QLabel(this);
    Piont6b->setPixmap(QPixmap("Pion_blanc.png"));
    Piont6b->setFixedSize(75,75);
    QLabel *Piont7b = new QLabel(this);
    Piont7b->setPixmap(QPixmap("Pion_blanc.png"));
    Piont7b->setFixedSize(75,75);
    QLabel *Piont8b = new QLabel(this);
    Piont8b->setPixmap(QPixmap("Pion_blanc.png"));
    Piont8b->setFixedSize(75,75);


    Position(TourGb,0,0);
    Position(CavalGb,1,0);
    Position(FouGb,2,0);
    Position(Reineb,3,0);
    Position(Roib,4,0);
    Position(FouDb,5,0);
    Position(CavalDb,6,0);
    Position(TourDb,7,0);
    Position(Piont1b,0,1);
    Position(Piont2b,1,1);
    Position(Piont3b,2,1);
    Position(Piont4b,3,1);
    Position(Piont5b,4,1);
    Position(Piont6b,5,1);
    Position(Piont7b,6,1);
    Position(Piont8b,7,1);

    QLabel *TourGn = new QLabel(this);
    TourGn->setPixmap(QPixmap("Tour_noir.png"));
    TourGn->setFixedSize(75,75);
    QLabel *CavalGn = new QLabel(this);
    CavalGn->setPixmap(QPixmap("Caval_noir.png"));
    CavalGn->setFixedSize(75,75);
    QLabel *FouGn = new QLabel(this);
    FouGn->setPixmap(QPixmap("Fou_noir.png"));
    FouGn->setFixedSize(75,75);
    QLabel *Reinen = new QLabel(this);
    Reinen->setPixmap(QPixmap("Reine_noir.png"));
    Reinen->setFixedSize(75,75);
    QLabel *Roin = new QLabel(this);
    Roin->setPixmap(QPixmap("Roi_noir.png"));
    Roin->setFixedSize(75,75);
    QLabel *FouDn = new QLabel(this);
    FouDn->setPixmap(QPixmap("Fou_noir.png"));
    FouDn->setFixedSize(75,75);
    QLabel *CavalDn = new QLabel(this);
    CavalDn->setPixmap(QPixmap("Caval_noir.png"));
    CavalDn->setFixedSize(75,75);
    QLabel *TourDn = new QLabel(this);
    TourDn->setPixmap(QPixmap("Tour_noir.png"));
    TourDn->setFixedSize(75,75);
    QLabel *Piont1n = new QLabel(this);
    Piont1n->setPixmap(QPixmap("Pion_noir.png"));
    Piont1n->setFixedSize(75,75);
    QLabel *Piont2n = new QLabel(this);
    Piont2n->setPixmap(QPixmap("Pion_noir.png"));
    Piont2n->setFixedSize(75,75);
    QLabel *Piont3n = new QLabel(this);
    Piont3n->setPixmap(QPixmap("Pion_noir.png"));
    Piont3n->setFixedSize(75,75);
    QLabel *Piont4n = new QLabel(this);
    Piont4n->setPixmap(QPixmap("Pion_noir.png"));
    Piont4n->setFixedSize(75,75);
    QLabel *Piont5n = new QLabel(this);
    Piont5n->setPixmap(QPixmap("Pion_noir.png"));
    Piont5n->setFixedSize(75,75);
    QLabel *Piont6n = new QLabel(this);
    Piont6n->setPixmap(QPixmap("Pion_noir.png"));
    Piont6n->setFixedSize(75,75);
    QLabel *Piont7n = new QLabel(this);
    Piont7n->setPixmap(QPixmap("Pion_noir.png"));
    Piont7n->setFixedSize(75,75);
    QLabel *Piont8n = new QLabel(this);
    Piont8n->setPixmap(QPixmap("Pion_noir.png"));
    Piont8n->setFixedSize(75,75);


    Position(TourGn,0,7);
    Position(CavalGn,1,7);
    Position(FouGn,2,7);
    Position(Reinen,3,7);
    Position(Roin,4,7);
    Position(FouDn,5,7);
    Position(CavalDn,6,7);
    Position(TourDn,7,7);
    Position(Piont1n,0,6);
    Position(Piont2n,1,6);
    Position(Piont3n,2,6);
    Position(Piont4n,3,6);
    Position(Piont5n,4,6);
    Position(Piont6n,5,6);
    Position(Piont7n,6,6);
    Position(Piont8n,7,6);




}

void Plateau::Position(QLabel *a, int ligne, int colonne){
    a->move(0,0);
    a->move(50+(ligne*75),50+(colonne*75));
}


