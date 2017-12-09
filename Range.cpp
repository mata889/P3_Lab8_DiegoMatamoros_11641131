#include "Range.h"

#include <iostream>

using namespace std;

Range::Range(){
	this->rango = " ";
}
//nombre, poder, batalla, experiencia, hp, fuerza, def, vel
Range::Range(string pRango, string nombre, string poder,  int hp, int fuerza, double def, double vel):Minion(nombre, poder, hp, fuerza, def, vel){
	rango = pRango;
}

string Range::getRango(){
	return rango;
}

Range::~Range(){
}
