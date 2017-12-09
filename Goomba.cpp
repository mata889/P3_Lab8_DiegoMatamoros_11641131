#include "Minion.h"
#include "Melee.h"
#include "Goomba.h"

#include <iostream>

using namespace std;

Goomba::Goomba(){
	this->tamano = " ";
}

Goomba::Goomba(string pTamano,  string intimidar , string nombre, string poder,  int hp, int fuerza, double def, double vel):Melee(intimidar, nombre, poder, hp, fuerza, def, vel){
	tamano = pTamano;
}

string Goomba::getTamano(){
	return tamano;
}

Goomba::~Goomba(){
}
