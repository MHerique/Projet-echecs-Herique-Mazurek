#include "menu.h"
#include "Plateau.h"

Menu::Menu() : QWidget()
{
    QLabel *Fond_ecran_accueil = new QLabel(this);
    Fond_ecran_accueil->setPixmap(QPixmap("chess.png"));
    this->setWindowIcon(QIcon("Reine_noir.png"));

    m_bouton1 = new QPushButton("Nouvelle partie", this);
    m_bouton1->setFont(QFont("Comic Sans MS", 20));
    m_bouton1->setCursor(Qt::PointingHandCursor);

    m_bouton2 = new QPushButton("A propos", this);
    m_bouton2->setFont(QFont("Comic Sans MS", 14));
    m_bouton2->setCursor(Qt::PointingHandCursor);

    m_bouton3 = new QPushButton("Quitter", this);
    m_bouton3->setFont(QFont("Comic Sans MS", 14));
    m_bouton3->setCursor(Qt::PointingHandCursor);

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(Fond_ecran_accueil, 0, 0, 10, 10);
    layout->addWidget(m_bouton1, 5, 3, 2, 4);
    layout->addWidget(m_bouton2, 6, 3,2,3);
    layout->addWidget(m_bouton3, 6, 6,2,1);
    Fond_ecran_accueil->setAlignment(Qt::AlignCenter);
    this->setLayout(layout);

    QObject::connect(m_bouton1, SIGNAL(clicked()), this, SLOT(entrerPseudo()));
    QObject::connect(m_bouton3, SIGNAL(clicked()), qApp, SLOT(quit()));
    QObject::connect(m_bouton2, SIGNAL(clicked()), this, SLOT(APropos()));
}

void Menu::APropos(){
    QMessageBox::information(this, "A propos", "Ce programme de jeu d'échecs interactif a été réalisé par Mathieu Herique et Pierre Mazurek !");
}

void Menu::entrerPseudo(){
    bool okB, okN =false;
    QString pseudoB = QInputDialog::getText(this, "Nom du joueur blanc", "Indiquer le nom du joueur blanc",QLineEdit::Normal, QString(), &okB);

if (okB && !pseudoB.isEmpty())
{
    QString pseudoN = QInputDialog::getText(this,"Nom du joueur noir", "Indiquer le nom du joueur noir", QLineEdit::Normal, QString(), &okN);

    if(okN && !pseudoN.isEmpty()){
        Plateau *partie = new Plateau;
        partie->show();
        this->close();
    }
    else
    {
        QMessageBox::critical(this, "Joueur Noir", "Vous n'avez pas rentré votre nom...");
    }
}
else
{
    QMessageBox::critical(this, "Joueur Blanc", "Vous n'avez pas rentré votre nom...");
}
}

void Menu::ouvrirPlateau(){
    Plateau *partie = new Plateau;
    partie->show();
    this->close();
}
