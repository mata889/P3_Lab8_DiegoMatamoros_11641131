#ifndef GOOMBA_H
#define GOOMBA_H

#include <string>
#include "Melee.h"

using namespace std;

class Goomba:public Melee{
private:
	string tamano;

public:
	Goomba(string, string, string, string, int,  int, double, double);
	Goomba();

	string getTamano();

	void setTamano(string);

	virtual ~Goomba();

};
#endif
