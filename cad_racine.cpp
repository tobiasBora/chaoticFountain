#include "cad_racine.h"
#include "cad_roue.h"
#include "calcanddraw.h"

void CAD_Racine::createSsObjects()
{
    // On crée un objet Roue.
    CAD_Roue * roue = new CAD_Roue(m_scene, m_gview);
    m_vector.push_back(roue);
}
