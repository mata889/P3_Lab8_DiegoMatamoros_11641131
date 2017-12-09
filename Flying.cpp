#include "Flying.h"

#include <iostream>

using namespace std;

Flying::Flying(){
	this->vuelo = " ";
}
//nombre, poder, batalla, experiencia, hp, fuerza, def, vel
Flying::Flying(string pVuelo, string nombre, string poder, int hp, int fuerza, double def, double vel):Minion(nombre, poder, hp, fuerza, def, vel){
	vuelo = pVuelo;
}

string Flying::getVuelo(){
	return vuelo;
}

Flying::~Flying(){
}
