#include "navette.h"

Navette::Navette()
{

}

void Navette::setDt(double dt)
{
    m_dt = dt;
}
void Navette::setT(double t)
{
    m_t = t;
}
void Navette::setG(double g)
{
    m_g = g;
}
double Navette::getDt()
{
    return m_dt;
}
double Navette::getT()
{
    return m_t;
}
double Navette::getG()
{
    return m_g;
}
