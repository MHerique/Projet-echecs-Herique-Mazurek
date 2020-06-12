#ifndef MENU_H
#define MENU_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include<QApplication>
#include<QMovie>
#include<QPushButton>
#include<QGridLayout>
#include<QMessageBox>
#include<QIcon>
#include<QInputDialog>
#include<QLineEdit>

class Menu : public QWidget
{

Q_OBJECT

public:
    Menu();

public slots:
    void APropos();
    void ouvrirPlateau();
    void entrerPseudo();


private:
    QLabel *Fond_ecran_accueil;
    QPushButton *m_bouton1;
    QPushButton *m_bouton2;
    QPushButton *m_bouton3;
    QGridLayout *layout;
    QString pseudoB;
    QString pseudoN;
};

#endif // MENU_H
