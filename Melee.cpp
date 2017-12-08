#include "Melee.h"
using namespace std;

Melee::Melee(){
	this->intimidacion="";
}
Melee::Melee(string Poder,string Nombre,int Batallas,int Experiencia,int Hp,double Def,double Vel,int Fuerza,string pIntimidacion):Minion(nombre,poder,batallas,experiencia,hp,fuerza,def,vel){
	intimidacion=pIntimidacion;
}
string Melee::getIntimidacion(){
	return intimidacion;
}
Melee::~Melee(){

}
