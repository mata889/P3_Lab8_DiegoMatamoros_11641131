#ifndef RANGE_H
#define RANGE_H
#include "Minion.h"
#include <string>
#include <iostream>
using namespace std;

class Range:public Minion{
protected:
	string rango;
public:
	Range();
	Range(string,string,int,int,int,double,double,int,string);
	string getRango();
	virtual~Range();
};
#endif
