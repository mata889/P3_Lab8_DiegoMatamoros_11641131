#include "Flying.h"
#include <string>

Flying::Flying(){
	this->vuelo="";
}
Flying::Flying(string Poder,string Nombre,int Batallas,int Experiencia,int Hp,double Def,double Vel,int Fuerza,string pVuelo):Minion(nombre,poder,batallas,experiencia,hp,fuerza,def,vel){
	vuelo=pVuelo;
}
Flying::~Flying(){
	
}
