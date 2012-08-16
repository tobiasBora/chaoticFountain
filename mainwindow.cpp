#include "mainwindow.h"
#include "navette.h"
#include "cad_racine.h"

#include <QGridLayout>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // On définit la zone centrale de la fenetre principale
    m_zoneCentrale = new QWidget();

    // On crée la scène :
    m_scene = new QGraphicsScene();
    QGraphicsRectItem *rect = m_scene->addRect(QRectF(0, 0, 100, 100));

    // On créé la zone de dessin :
    m_gview = new QGraphicsView(m_scene);

    // On ajoute le widget à la grille
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(m_gview,0,0);
    // On lit la grille à la zone centrale :
    m_zoneCentrale->setLayout(layout);
    setCentralWidget(m_zoneCentrale);

    // On crée une navette :
    m_navette = new Navette();
    m_navette->setDt(1);
    m_navette->setT(0);
    m_navette->setG(9.81);


    // On crée un objet Roue.
    CAD_Racine * racine = new CAD_Racine(m_scene, m_gview);
    racine->draw();

    // Affichage final
    m_gview->show();

}

MainWindow::~MainWindow()
{
    
}

