#ifndef MELEE_H
#define MELEE_H

#include "Minion.h"
#include <string>
#include <iostream>
using namespace std;

class Melee:public Minion{
protected:
	string intimidacion;
public:
	Melee();
	Melee(string,string,int,int,int,double,double,int,string);

	string getIntimidacion();
	virtual~Melee();
};
#endif
