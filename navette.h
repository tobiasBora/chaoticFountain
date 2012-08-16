#ifndef NAVETTE_H
#define NAVETTE_H

class Navette
{
public:
    Navette();
    void setDt(double dt);
    void setT(double t);
    void setG(double g);
    double getDt();
    double getT();
    double getG();

protected:
    double m_dt;
    double m_t;
    double m_g;
};

#endif // NAVETTE_H
