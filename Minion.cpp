#include "Minion.h"
using namespace std;

Minion::Minion(){
	this->nombre="";
	this->poder="";
	this->batallas=0;
	this->experiencia=0;
	this->hp=0;
	this->fuerza=0;
	this->def=0;
	this->vel=0;
}
Minion::Minion(string pPoder,string pNombre,int pBatallas,int pExperiencia,int pHp,double pDef,double pVel,int pFuerza){
	poder=pPoder;
	nombre=pNombre;
	batallas=pBatallas;
	experiencia=pExperiencia;
	hp=pHp;
	def=pDef;
	vel=pVel;
	fuerza=pFuerza;
}

string Minion::getPoder(){
	return poder;
}
string Minion::getNombre(){
	return nombre;
}
int Minion::getHp(){
	return hp;
}
int Minion::getBatallas(){
	return batallas;
}
int Minion::getExperiencia(){
	return experiencia;
}
double Minion::getDef(){
	return def;
}
double Minion::getVel(){
	return vel;
}
int Minion::getFuerza(){
	return fuerza;
}


void Minion::setBatallas(int pBatallas){
	batallas=pBatallas;
}
void Minion::setExperiencia(int pExperiencia){
	experiencia=pExperiencia;
}
Minion::~Minion(){

}
