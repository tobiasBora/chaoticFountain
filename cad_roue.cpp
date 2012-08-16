#include "cad_roue.h"
#include <QGraphicsScene>
#include <calcanddraw.h>

CAD_Roue::CAD_Roue(QGraphicsScene * scene, QGraphicsView * gview): CalcAndDraw(scene, gview)
{

}

void CAD_Roue::draw()
{
    QGraphicsRectItem *rect = m_scene->addRect(QRectF(150, 150, 100, 100));

    m_gview->show();
}
