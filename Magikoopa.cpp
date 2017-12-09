#include "Magikoopa.h"

Magikoopa::Magikoopa(){
	this->colorTraje="";
}
Magikoopa::Magikoopa(string Poder,string Nombre,int Batallas,int Experiencia,int Hp,double Def,double Vel,int Fuerza,string rango,string pColorTraje):Range(Poder, Nombre, Batallas, Experiencia, Hp,Def,Vel,Fuerza,rango){
	colorTraje=pColorTraje;
}
string Magikoopa::getColorTraje(){
	return colorTraje;
}
Magikoopa::~Magikoopa(){
	
}
