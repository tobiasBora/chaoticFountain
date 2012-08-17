#include "cad_racine.h"
#include "cad_roue.h"
#include "calcanddraw.h"
#include <QDebug>


CAD_Racine::CAD_Racine(QGraphicsScene * scene, QGraphicsView * gview): CalcAndDraw(scene, gview)
{
     createSsObjects();
}

void CAD_Racine::createSsObjects()
{
     qDebug() << "CAD_Racine : createSsObjects()";
    // On crée un objet Roue.
    CAD_Roue * roue = new CAD_Roue(m_scene, m_gview);
    m_ssObjects.push_back(roue);
}

void CAD_Racine::draw()
{
    // QGraphicsRectItem *rect = m_scene->addRect(QRectF(150, 150, 100, 100));
    qDebug() << "CAD_Racine : askDraw ask";
    askDraw();
    m_gview->show();
}

