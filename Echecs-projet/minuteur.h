#ifndef MINUTEUR_H
#define MINUTEUR_H
#include <QTimer>
#include <QObject>


class Minuteur : public QObject
{
    Q_OBJECT
private:

public:
    QTimer* minuteur;
    Minuteur();
    int get(){
        return minuteur->remainingTime();
    };
public slots:
    void minuteurSlot();
};

#endif // MINUTEUR_H
