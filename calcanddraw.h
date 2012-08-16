#ifndef CALCANDDRAW_H
#define CALCANDDRAW_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include "navette.h"
#include <vector>

class CalcAndDraw
{
public:
    CalcAndDraw(QGraphicsScene * scene, QGraphicsView * gview);
    // lie le fichier à la navette ;
    void linkNavette(Navette * navette);
    // crée les sous objets :
    void createSsObjects();
    // Dessine l'objet courant
    void draw();
    // Demande d'afficher le dessin final
    void callDraw();
    // Demande aux sous objets d'afficher leurs dessins
    void askDraw();
    // Calcule :
    void calc();
    // Demande aux sous objets de calculer :
    void askCalc();

protected:
    QGraphicsScene * m_scene;
    QGraphicsView * m_gview;
    Navette * m_navette;
    std::vector<CalcAndDraw *> m_ssObjects;

};

#endif // CALCANDDRAW_H
