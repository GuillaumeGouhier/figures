/*! \file cercle.h
* \brief fichier de la classe cercle
* \author Paul
* \version 1.0
*/

#pragma once
#include <string>
#include <iostream>
#include "figure.h"


/*! \class cercle
* \brief classe circle, classe fille de figure contenant plusieurs methodes pour calculer la surface et le perimetre du cercle
*/

class circle : public figure // classe fille de Figure
{
public:

/*! \brief methode surface, affiche l'aire de la figure
* \ param radius float
*/
        float area(float radius);


/*! \brief methode perimetre, affiche le perimetre de la figure
* \ param radius float
*/
	float perimeter(float radius);

};


