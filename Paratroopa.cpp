#include "Paratroopa.h"

Paratroopa::Paratroopa(){
	this->colorCaparazon="";
}
Paratroopa::Paratroopa(string Poder,string Nombre,int Batallas,int Experiencia,int Hp,double Def,double Vel,int Fuerza,string Vuelo,string pColorCaparazon):Flying(Poder, Nombre, Batallas, Experiencia, Hp,Def,Vel,Fuerza,Vuelo){
	colorCaparazon=pColorCaparazon;
}
string Paratroopa::getColorCaparazon(){
	return colorCaparazon;
}
Paratroopa::~Paratroopa(){

}
