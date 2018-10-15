#include <iostream>
#include "figure.h"
#include "triangle.h"
#include "rectangle.h"
#include "cercle.h"
#include <stdlib.h>
#include <string>

int main(){

int test;
triangle* tri= new triangle();
cercle* cer = new cercle();
rectangle rec;

std::cout<< "De quelle figure voulez vous calculer l'aire?" <<std::endl;
std::cout<< "1 : un triangle" <<std::endl;
std::cout<< "2 : un cercle" <<std::endl;
std::cout<< "3 : un rectangle" <<std::endl;

std::cin >> test;

switch(test)
{
case 1:
	float cote1, cote2, cote3, hauteur;
	std::cout<< "Quel est son premier cote?" <<std::endl;
	std::cin >> cote1;
	std::cout<< "Quel est son second cote?" <<std::endl;
	std::cin >> cote2;
	std::cout<< "Quel est son troisieme cote?" <<std::endl;
	std::cin >> cote3;
	std::cout<< "Quel est sa hauteur?" <<std::endl;
	std::cin >> hauteur;
	std::cout<< "La surface du triangle est " << tri->area(cote1, cote2, cote3, hauteur) << std::endl;
	std::cout<< "Le perimetre du triangle est " << tri->perimeter(cote1, cote2, cote3) << std::endl;
	break;

case 2:
	float rayon;
	std::cout<< "Quel est son rayon?" <<std::endl;
	std::cin >> rayon;
	std::cout<< "La surface du cercle est " << cer->area(rayon) << std::endl;
	std::cout<< "Le perimetrecercle du triangle est " << cer->perimeter(rayon) << std::endl;
	break;


case 3:
	float length, width;
	std::cout<< "Quel est sa longueur?" <<std::endl;
	std::cin >> length;
	std::cout<< "Quel est sa largeur?" <<std::endl;
	std::cin >> width;
std::cout<<"TEST"<<std::endl;
	std::cout<< "La surface du rectangle est " << rec.area(length, width)<< std::endl;
	 std::cout<< "Le perimetre du rectangle est " << rec.perimeter(length, width)<< std::endl;
	break;

default : 
	std::cout<< "Erreur" <<std::endl; 
	break;



}
}
