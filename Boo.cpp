

#include "Boo.h"

#include <iostream>

using namespace std;

Boo::Boo(){
	this->color = " ";
}

Boo::Boo(string pColor,  string vuelo , string nombre, string poder,  int hp, int fuerza, double def, double vel):Flying(vuelo, nombre, poder, hp, fuerza, def, vel){
	color = pColor;
}

string Boo::getColor(){
	return color;
}

Boo::~Boo(){
}
