#ifndef CAD_RACINE_H
#define CAD_RACINE_H

#include "calcanddraw.h"

class CAD_Racine : public CalcAndDraw
{
public:
    CAD_Racine(QGraphicsScene * scene, QGraphicsView * gview);
    void createSsObjects();
    void draw();

};

#endif // CAD_RACINE_H
