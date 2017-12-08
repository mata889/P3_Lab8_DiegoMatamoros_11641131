#ifndef MINION_H
#define MINION_H

#include <string>
#include <iostream>
using namespace std;

class Minion{
protected:
	string nombre,poder;
	int batallas,experiencia,hp,fuerza;
	double def,vel;

public:
	Minion();
	Minion(string,string,int,int,int,double,double,int);

	string getPoder();
	string getNombre();
	int getHp();
	int getBatallas();
	int getExperiencia();
	double getDef();
	double getVel();
	int getFuerza();

	void setPoder(string);
	void setNombre(string);
	void setHp(string);
	void setBatallas(int);
	void setExperiencia(int);
	void setDef(double);
	void setVel(double);
	void setFuerza(int);

	virtual~Minion();

};
#endif
