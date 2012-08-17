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
    virtual void linkNavette(Navette * navette);
    // crée les sous objets :
    virtual void createSsObjects();
    // Dessine l'objet courant
    virtual void draw();
    // Demande d'afficher le dessin final
    virtual void callDraw();
    // Demande aux sous objets d'afficher leurs dessins
    virtual void askDraw();
    // Calcule :
    virtual void calc();
    // Demande aux sous objets de calculer :
    virtual void askCalc();

protected:
    QGraphicsScene * m_scene;
    QGraphicsView * m_gview;
    Navette * m_navette;
    std::vector<CalcAndDraw *> m_ssObjects;

};

#endif // CALCANDDRAW_H
