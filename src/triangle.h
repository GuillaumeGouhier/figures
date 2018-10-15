/*! \file triangle.h
* \brief fichier de la classe cercle
* \author Paul
* \version 1.0
*/

#pragma once
#include <string>
#include <iostream>
#include "figure.h"


/*! \class triangle
* \brief classe triangle, classe fille de figure contenant plusieurs methodes pour calculer la surface et le perimetre du triangle
*/

class triangle : public figure  // classe fille de Figure
{
public:

/*! \brief methode surface, affiche l'aire de la figure
* \ param cote1 float
* \ param cote2 float
* \ param cote3 float
* \ param hauteur float
*/
        float surface(float cote1, float cote2, float cote3, float hauteur);


/*! \brief methode perimetre, affiche le perimetre de la figure
* \ param cote1 float
* \ param cote2 float
* \ param cote3 float
*/
	float perimetre(float cote1, float cote2, float cote3);


protected:


private:
};
