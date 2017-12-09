#include "Range.h"

Range::Range(){
	this->rango="";
}
Range::Range(string Poder,string Nombre,int Batallas,int Experiencia,int Hp,double Def,double Vel,int Fuerza,string pRango):Minion(nombre,poder,batallas,experiencia,hp,fuerza,def,vel){
	rango=pRango;
}
string Range::getRango(){
	return rango;
}
Range::~Range(){

}
