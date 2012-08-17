#include "cad_roue.h"
#include <QGraphicsScene>
#include <calcanddraw.h>
#include <QGraphicsEllipseItem>
#include <QDebug>


CAD_Roue::CAD_Roue(QGraphicsScene * scene, QGraphicsView * gview): CalcAndDraw(scene, gview)
{

}

void CAD_Roue::draw()
{
     qDebug() << "CAD_ROUE : draw";
     // QGraphicsRectItem *rect = m_scene->addRect(QRectF(150, 200, 200, 100));
     QGraphicsEllipseItem *cercle = m_scene->addEllipse(QRectF(0, 0,200,200));
     cercle->setOpacity(1.0);
     cercle->setBrush(QColor(70,70,70));

     m_gview->show();
}

void CAD_Roue::test()
{
     qDebug() << "Roue : fonction de test";
}
