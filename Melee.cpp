#include "Melee.h"
#include "Minion.h"
#include <iostream>

using namespace std;

Melee::Melee(){
	this->intimidar = " ";
}
//nombre, poder, batalla, experiencia, hp, fuerza, def, vel
Melee::Melee(string pIntimidar, string nombre, string poder, int hp, int fuerza, double def, double vel):Minion(nombre, poder, hp, fuerza, def, vel){
	intimidar = pIntimidar;
}

string Melee::getIntimidar(){
	return intimidar;
}

Melee::~Melee(){
}
