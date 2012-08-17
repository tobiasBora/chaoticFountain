#ifndef CAD_ROUE_H
#define CAD_ROUE_H

#include "calcanddraw.h"
#include <QGraphicsScene>

class CAD_Roue : public CalcAndDraw
{
public:
    CAD_Roue(QGraphicsScene * scene, QGraphicsView * gview);
    virtual void  draw();
    virtual void test();
};

#endif // CAD_ROUE_H
