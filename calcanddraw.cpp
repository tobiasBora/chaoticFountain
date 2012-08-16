#include "calcanddraw.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include "navette.h"

using namespace std;
/*
  Cette classe contiendra des objets à afficher
  */
CalcAndDraw::CalcAndDraw(QGraphicsScene * scene, QGraphicsView * gview): m_scene(scene), m_gview(gview)
{
    createObjects();
}

// Crée les sous objets :
void CalcAndDraw::createSsObjects()
{

}
// lie le fichier à la navette ;
void CalcAndDraw::linkNavette(Navette * navette)
{
    m_navette = navette;
}
// Dessine l'objet courant
void CalcAndDraw::draw()
{

}
// Demande d'afficher le dessin final
// # todo
void CalcAndDraw::callDraw()
{


}
// Demande aux sous objets d'afficher leurs dessins
void CalcAndDraw::askDraw()
{
    for(unsigned int i=0 ; i < m_ssObjects.size() ; i++)
    {
        m_ssObjects[i]->draw();
    }
}
// Calcule :
void CalcAndDraw::calc()
{

}
// Demande aux sous objets de calculer :
void CalcAndDraw::askCalc()
{
    for(unsigned int i=0 ; i < m_ssObjects.size() ; i++)
    {
        m_ssObjects[i]->calc();
    }
}
