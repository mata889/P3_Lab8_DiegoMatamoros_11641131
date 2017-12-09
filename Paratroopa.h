#ifndef PARATROOPA_H
#define PARATROOPA_H
#include "Flying.h"
#include <string>
#include <iostream>
using namespace std;

class Paratroopa:public Flying{
protected:
	string colorCaparazon;
public:
	Paratroopa();
	Paratroopa(string,string,int,int,int,double,double,int,string,string);

	string getColorCaparazon();

	virtual~Paratroopa();
};
#endif
