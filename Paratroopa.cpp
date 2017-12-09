

#include "Paratroopa.h"

#include <iostream>

using namespace std;

Paratroopa::Paratroopa(){
	this->color = " ";
}

Paratroopa::Paratroopa(string pColor,  string vuelo , string nombre, string poder,  int hp, int fuerza, double def, double vel):Flying(vuelo, nombre, poder, hp, fuerza, def, vel){
	color = pColor;
}

string Paratroopa::getColor(){
	return color;
}

Paratroopa::~Paratroopa(){
}
