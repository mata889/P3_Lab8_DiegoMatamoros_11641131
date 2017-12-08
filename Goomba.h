#ifndef GOOMBA_H
#define GOOMBA_H

#include <string>
#include <iostream>
#include "Melee.h"
using namespace std;

class Goomba:public Melee{
protected:
	string size;
public:
	Goomba();
	Goomba(string,string,int,int,int,double,double,int,string,string);

	string getSize();

	virtual~Goomba();
};
#endif
