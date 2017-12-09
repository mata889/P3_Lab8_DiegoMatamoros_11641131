#include "Minion.h"

#include <iostream>

using namespace std;

Minion::Minion(){
	this->nombre = " ";
	this->poder = " ";
	this->batalla = 0;
	this->experiencia = 0;
	this->hp = 0;
	this->fuerza = 0;
	this->def = 0;
	this->vel = 0;

}
//nombre, poder, batalla, experiencia, hp, fuerza, def, vel
Minion::Minion(string pNombre, string pPoder, int pHp, int pFuerza, double pDef, double pVel){
	nombre = pNombre;
	poder = pPoder;
	batalla = 0;
	experiencia = 0;
	hp = pHp;
	fuerza = pFuerza;
	def = pDef;
	vel = pVel;

}

string Minion::getNombre(){
	return nombre;
}

string Minion::getPoder(){
	return poder;
}

int Minion::getBatalla(){
	return batalla;
}

int Minion::getExperiencia(){
	return experiencia;
}

int Minion::getHp(){
	return hp;
}

int Minion::getFuerza(){
	return fuerza;
}

double Minion::getDef(){
	return def;
}

double Minion::getVel(){
	return vel;
}

void Minion::setBatalla(int pBatalla){
	batalla = pBatalla;
}

void Minion::setExperiencia(int pExperiencia){
	experiencia = pExperiencia;
}

Minion::~Minion(){

}
