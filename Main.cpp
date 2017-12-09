#include <iostream>
#include <string>
#include <vector>
class Flying;
#include "Minion.h"
#include "Melee.h"
#include "Range.h"
#include "Goomba.h"
#include "Boo.h"
#include "Chomp.h"
#include "Hammer.h"
#include "Magikoopa.h"
#include "Paratroopa.h"
void Atacar(Minion*,Minion* );

using namespace std;

int  main(){
	vector<Minion*>listaPeople;
	vector<vector<Minion*>>equipos;
	int menu;
	do {
		cout<<"#LEO&SUAZO NO SEAN MALOS PLZ"<<endl;
		cout<<"1.CrearMinions\n2.CrearEquipo\n3.EliminarEquipo\n4.Simulacion\n0.salir"<<endl;
		cin>>menu;
		switch (menu) {
			case 1:{
				int menuTipo;
				cout<<"Que tipo quiere\n1.Melee\n2.Flying\n3.Range"<<endl;
				cin>>menuTipo;
				switch (menuTipo) {
					case 1:{
						int menuMelee;
						cout<<"1.Goomba\n2.ChainChop"<<endl;
						cin>>menuMelee;
						if (menuMelee==1) {//string pTamano,  string intimidar , string nombre, string poder,  int hp, int fuerza, double def, double vel
							string tamano,intimidar,nombre;
							int hp;
							cout<<"introduzca el tamano"<<endl;
							cin>>tamano;
							cout<<"Su Intimidacion"<<endl;
							cin>>intimidar;
							cout<<"introduzca nombre"<<endl;
							cin>>nombre;
							bool HP=false;
							do {
								cout<<"Introduzca hp,menor que 40 y mayor que 20"<<endl;
								cin>>hp;
								if (hp>=20 && hp<=40) {
									cout<<"bien,ha sido creado"<<endl;
									HP=false;
								}else{
									HP=true;
								}
							}while(HP!=false);
							Minion* goomba=new Goomba(tamano,intimidar,nombre,"G",hp,10,0.0,0.65);
							listaPeople.push_back(goomba);
							//cout<<listaPeople.at(0)->getNombre()<<endl;
						}
						else if (menuMelee==2) {//string pColor,  string intimidar , string nombre, string poder,  int hp, int fuerza, double def, double vel
							string color,intimidar,nombre;
							int hp;
							cout<<"introduzca el color"<<endl;
							cin>>color;
							cout<<"Su Intimidacion"<<endl;
							cin>>intimidar;
							cout<<"introduzca nombre"<<endl;
							cin>>nombre;
							bool HP=false;
							do {
								cout<<"Introduzca hp,menor que 30 y mayor que 10"<<endl;
								cin>>hp;
								if (hp>=10 && hp<=30) {
									cout<<"bien,ha sido creado"<<endl;
									HP=false;
								}else{
									HP=true;
								}
							}while(HP!=false);
							Minion* chomp=new Chomp(color,intimidar,nombre,"C",hp,15,0.60,0.20);
							listaPeople.push_back(chomp);
						}else{
							cout<<"Porfavor introduzca bien"<<endl;
						}
					}break;
					case 2:{
						int menuFlying;
						cout<<"1.Boo\n2.Paratroopa"<<endl;
						cin>>menuFlying;
						if (menuFlying==1) {//string pColor,  string vuelo , string nombre, string poder,  int hp, int fuerza, double def, double vel
							string color,vuelo,nombre;
							int hp;
							cout<<"introduzca el color"<<endl;
							cin>>color;
							cout<<"Su vuelo"<<endl;
							cin>>vuelo;
							cout<<"introduzca nombre"<<endl;
							cin>>nombre;
							bool HP=false;
							do {
								cout<<"Introduzca hp,menor que 40 y mayor que 20"<<endl;
								cin>>hp;
								if (hp>=20 && hp<=40) {
									cout<<"bien,ha sido creado"<<endl;
									HP=false;
								}else{
									HP=true;
								}
							}while(HP!=false);
							Minion* boo=new Boo(color,vuelo,nombre,"B",hp,8,0.20,0.35);
							listaPeople.push_back(boo);
						}else if (menuFlying==2) {//string pColor,  string vuelo , string nombre, string poder,  int hp, int fuerza, double def, double vel
							string color,vuelo,nombre;
							int hp;
							cout<<"introduzca el color"<<endl;
							cin>>color;
							cout<<"Su vuelo"<<endl;
							cin>>vuelo;
							cout<<"introduzca nombre"<<endl;
							cin>>nombre;
							bool HP=false;
							do {
								cout<<"Introduzca hp,menor que 60 y mayor que 40"<<endl;
								cin>>hp;
								if (hp>=40 && hp<=60) {
									cout<<"bien,ha sido creado"<<endl;
									HP=false;
								}else{
									HP=true;
								}
							}while(HP!=false);
							Minion* paratroopa=new Paratroopa(color,vuelo,nombre,"P",hp,9,0.40,0.10);
							listaPeople.push_back(paratroopa);
						}else{
							cout<<"Porfavor introduzca bien"<<endl;
						}
					}break;
					case 3:{
						int menuRange;
						cout<<"1.HammerBro\n2.Magikoopa"<<endl;
						cin>>menuRange;
						if (menuRange==1) {//string pSize,  string rango , string nombre, string poder,  int hp, int fuerza, double def, double vel
							string size,rango,nombre;
							int hp;
							cout<<"introduzca el size"<<endl;
							cin>>size;
							cout<<"Su rango"<<endl;
							cin>>rango;
							cout<<"introduzca nombre"<<endl;
							cin>>nombre;
							bool HP=false;
							do {
								cout<<"Introduzca hp,menor que 80 y mayor que 60"<<endl;
								cin>>hp;
								if (hp>=60 && hp<=80) {
									cout<<"bien,ha sido creado"<<endl;
									HP=false;
								}else{
									HP=true;
								}
							}while(HP!=false);
							Minion* hammer=new Hammer(size,rango,nombre,"H",hp,6,0.15,0.30);
							listaPeople.push_back(hammer);
						}else if(menuRange==2){//string pColor,  string rango , string nombre, string poder,  int hp, int fuerza, double def, double vel
							string color,rango,nombre;
							int hp;
							cout<<"introduzca el color"<<endl;
							cin>>color;
							cout<<"Su rango"<<endl;
							cin>>rango;
							cout<<"introduzca nombre"<<endl;
							cin>>nombre;
							bool HP=false;
							do {
								cout<<"Introduzca hp,menor que 70 y mayor que 50"<<endl;
								cin>>hp;
								if (hp>=50 && hp<=70) {
									cout<<"bien,ha sido creado"<<endl;
									HP=false;
								}else{
									HP=true;
								}
							}while(HP!=false);
							Minion* magikoopa=new Magikoopa(color,rango,nombre,"M",hp,7,0.0,0.60);
							listaPeople.push_back(magikoopa);
						}else{
							cout<<"Porfavor introduzca bien"<<endl;
						}
					}break;
					case 4:cout<<"Escoja bien"<<endl;
				}
			}break;
			case 2:{
				int menuLista;
				if (listaPeople.size()>7) {
					vector<Minion*>equipo;
					for (size_t i = 0; i < 7; i++) {
						cout<<"introduzca al que quiere en su drim tim"<<endl;
						for (size_t i = 0; i < listaPeople.size(); i++) {
							cout<<"("<<i<<")"<<listaPeople.at(i)->getNombre()<<endl;
						}
						cout<<"Escoja cual quiere "<<endl;
						cin>>menuLista;
						equipo.push_back(listaPeople.at(menuLista));
					}
					equipos.push_back(equipo);
				}else{
					cout<<"Papu no sea huevon, haga mas personajes papi"<<endl;
				}
			}break;
			case 3:{
				for (size_t i = 0; i < equipos.size(); i++) {
					//cout<<"("<<i<<")"<<equipos.at(i)->getNombre()<<endl;
				}
				int borrar;
				cout<<"Escoja que equipo quiere borrar"<<endl;
				cin>>borrar;
				equipos.erase(equipos.begin()+borrar);
				cout<<"SE HA BORRADO EL EQUIPO"<<endl;

			}break;
			case 4:{
				cout<<"Simulacion"<<endl;
				int equi1,equi2;
				Minion* equipo1;
				Minion* equipo2;
				cout<<"-----Escoja primer TIM:(----"<<endl;
				cout<<endl;

				for (size_t i = 0; i < equipos.size(); i++) {
				//	cout<<"("<<i<<")"<<equipos.at(i)->getNombre()<<endl;
				}
				cin>>equi1;
				//equipo1=equipos.at(equi1);
				cout<<"-----Escoja segundo TIM:(----"<<endl;
				cout<<endl;

				for (size_t i = 0; i < equipos.size(); i++) {
					//cout<<"("<<i<<")"<<equipos.at(i)->getNombre()<<endl;
				}
				cin>>equi2;
				//equipo2=equipos.at(equi2);
				Atacar(equipo1,equipo2);

			}break;
		}
	} while(menu!=0);
	return 0;
}


void Atacar(Minion* equipo1,Minion* equipo2 ){

}
