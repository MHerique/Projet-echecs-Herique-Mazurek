#ifndef MINUTEUR_H
#define MINUTEUR_H
#include <QTimer>
#include <QObject>
#include <QWidget>
#include <iostream>


class Minuteur : public QObject
{
    Q_OBJECT
private:
    QTimer* minuteur;
    int decisecondes;
    int secondes;
    int minutes;
public:

    explicit Minuteur(int temps,QObject *parent=0);
    void test(){
        std::cout << minutes << " : " << secondes << " : " << decisecondes << std::endl;
    };
public slots:
    void minuteurSlot();
};

#endif // MINUTEUR_H
