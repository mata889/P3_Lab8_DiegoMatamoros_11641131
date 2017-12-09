#include "Minion.h"
#include "Range.h"
#include "Hammer.h"

#include <iostream>

using namespace std;

Hammer::Hammer(){
	this->size = " ";
}

Hammer::Hammer(string pSize,  string rango , string nombre, string poder,  int hp, int fuerza, double def, double vel):Range(rango, nombre, poder, hp, fuerza, def, vel){
	size = pSize;
}

string Hammer::getSize(){
	return size;
}

Hammer::~Hammer(){
}
