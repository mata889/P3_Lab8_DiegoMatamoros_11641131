#include "Goomba.h"
#include <string>

Goomba::Goomba(){
	this->size="";
}
Goomba::Goomba(string Poder,string Nombre,int Batallas,int Experiencia,int Hp,double Def,double Vel,int Fuerza,string Intimidacion,string pSize):Melee(Poder, Nombre, Batallas, Experiencia, Hp,Def,Vel,Fuerza,Intimidacion){
	size=pSize;
	Poder="goomba";
}
Goomba::~Goomba(){

}
