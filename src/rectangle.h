/*! \file rectangle.h
* \brief fichier de la classe rectangle
* \author Paul
* \version 1.0
*/

#pragma once
#include <string>
#include <iostream>
#include "figure.h"

/*! \class rectangle
* \brief classe rectangle, classe fille de figure contenant plusieurs methodes pour calculer la surface et le perimetre du rectangle
*/

class rectangle  : public figure  // classe fille de Figure
{
public:

/*! \brief methode surface, affiche l'aire de la figure
* \ param length float
* \ param width float
*/
        float area(float length, float width);


/*! \brief methode perimetre, affiche le perimetre de la figure
* \ param length float
* \ param width float
*/
	float perimeter(float length, float width);
};
