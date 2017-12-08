#include "ChainChop.h"
#include <string>

ChainChop::ChainChop(){
	this->color="";
}
ChainChop::ChainChop(string Poder,string Nombre,int Batallas,int Experiencia,int Hp,double Def,double Vel,int Fuerza,string Intimidacion,string pColor):Melee(Poder, Nombre, Batallas, Experiencia, Hp,Def,Vel,Fuerza,Intimidacion){
	color=pColor;
}
ChainChop::~ChainChop(){
	
}
