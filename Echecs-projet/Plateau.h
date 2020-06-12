#ifndef PLATEAU_H
#define PLATEAU_H
#include"menu.h"
#include <QObject>
#include <QWidget>
#include <QLabel>
#include<QApplication>
#include<QMovie>
#include<QPushButton>
#include<QGridLayout>
#include<QMessageBox>
#include<QIcon>

class Plateau : public QWidget
{
    Q_OBJECT

public:
    Plateau();
    void Position(QLabel *a, int ligne, int colonne);

public slots:

private:
    int ligne;
    int colonne;
    QLabel *Plateau_image;
    QLabel *TourGb;
    QLabel *CavalGb;
    QLabel *FouGb;
    QLabel *Reineb;
    QLabel *Roib;
    QLabel *FouDb;
    QLabel *CavalDb;
    QLabel *TourDb;
    QLabel *Piont1b;
    QLabel *Piont2b;
    QLabel *Piont3b;
    QLabel *Piont4b;
    QLabel *Piont5b;
    QLabel *Piont6b;
    QLabel *Piont7b;
    QLabel *Piont8b;
    QLabel *m_pseudoN;
    QLabel *m_pseudoB;


};

#endif // PLATEAU_H
