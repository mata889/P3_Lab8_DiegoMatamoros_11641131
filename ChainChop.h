#ifndef CHAINCHOP_H
#define CHAINCHOP_H

#include <string>
#include <iostream>
using namespace std;
#include "Melee.h"

class ChainChop:public Melee{
protected:
	string color;
public:
	ChainChop();
	ChainChop(string,string,int,int,int,double,double,int,string,string);

	string getColor();

	virtual~ChainChop();
};
#endif
