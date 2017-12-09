#ifndef FLYING_H
#define FLYING_H
#include "Minion.h"
#include <string>
#include <iostream>
using namespace std;

class Flying:public Minion{
protected:
	string vuelo;
public:
	Flying();
	Flying(string,string,int,int,int,double,double,int,string);

	string getVuelo();
	virtual ~Flying();

};
#endif
