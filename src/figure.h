/*! \file figure.h
* \brief fichier de la classe figure
* \author Guillaume
* \version 1.0
*/

#pragma once
#include <string>
#include <iostream>


/*! \class figure
* \brief classe figure mère contenant plusieurs methodes pour calculer la surface et le perimetre de la figure, classe virtuelle impossible à instancier
*/

class figure // classe abstraite
{
public:

/*! \brief methode surface, affiche l'aire de la figure
*/
	virtual float area();


/*! \brief methode perimetre, affiche le perimetre de la figure
*/
	virtual float perimeter();
};


