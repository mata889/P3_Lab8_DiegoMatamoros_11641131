#ifndef BOO_H
#define BOO_H
#include "Flying.h"
#include <string>
#include <iostream>
using namespace std;

class Boo:public Flying{
protected:
	string colorBoo;
public:
	Boo();
	Boo(string,string,int,int,int,double,double,int,string,string);
	string getColorBoo();
	virtual~Boo();
};
#endif
