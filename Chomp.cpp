#include "Minion.h"
#include "Melee.h"
#include "Chomp.h"

#include <iostream>

using namespace std;

Chomp::Chomp(){
	this->color = " ";
}

Chomp::Chomp(string pColor,  string intimidar , string nombre, string poder,  int hp, int fuerza, double def, double vel):Melee(intimidar, nombre, poder, hp, fuerza, def, vel){
	color = pColor;
}

string Chomp::getColor(){
	return color;
}

Chomp::~Chomp(){
}
