#ifndef CAD_ROUE_H
#define CAD_ROUE_H

#include "calcanddraw.h"
#include <QGraphicsScene>

class CAD_Roue : public CalcAndDraw
{
public:
    CAD_Roue(QGraphicsScene * scene, QGraphicsView * gview);
    void draw();
};

#endif // CAD_ROUE_H
