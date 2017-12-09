#include "HammerBro.h"

HammerBro::HammerBro(){
	this->sizeMartillo="";
}
HammerBro::HammerBro(string Poder,string Nombre,int Batallas,int Experiencia,int Hp,double Def,double Vel,int Fuerza,string rango,string pSizeMartillo):Range(Poder, Nombre, Batallas, Experiencia, Hp,Def,Vel,Fuerza,rango){
	sizeMartillo=pSizeMartillo;
}
string HammerBro::getSizeMartillo(){
	return sizeMartillo;
}
HammerBro::~HammerBro(){
	
}
