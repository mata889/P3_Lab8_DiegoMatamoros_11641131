#include "Boo.h"

Boo::Boo(){
	this->colorBoo="";
}
Boo::Boo(string Poder,string Nombre,int Batallas,int Experiencia,int Hp,double Def,double Vel,int Fuerza,string Vuelo,string pColorBoo):Flying(Poder, Nombre, Batallas, Experiencia, Hp,Def,Vel,Fuerza,Vuelo){
	colorBoo=pColorBoo;
}
string Boo::getColorBoo(){
	return colorBoo;
}
Boo::~Boo(){

}
