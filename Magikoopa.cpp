#include "Minion.h"
#include "Range.h"
#include "Magikoopa.h"

#include <iostream>

using namespace std;

Magikoopa::Magikoopa(){
	this->color = " ";
}

Magikoopa::Magikoopa(string pColor,  string rango , string nombre, string poder,  int hp, int fuerza, double def, double vel):Range(rango, nombre, poder, hp, fuerza, def, vel){
	color = pColor;
}

string Magikoopa::getColor(){
	return color;
}

Magikoopa::~Magikoopa(){
}
