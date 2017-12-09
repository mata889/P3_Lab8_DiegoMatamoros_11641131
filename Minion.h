#ifndef MINION_H
#define MINION_H

#include <string>

using namespace std;

class Minion{
protected:
	string nombre, poder;
	int batalla, experiencia, hp, fuerza;
	double def, vel;
public:
	Minion();
	Minion(string, string, int, int, double, double);

	string getNombre();
	string getPoder();
	int getBatalla();
	int getExperiencia();
	int getHp();
	int getFuerza();
	double getDef();
	double getVel();

	void setBatalla(int);
	void setExperiencia(int);

	virtual ~Minion();
};
#endif
