#ifndef MAGIKOOPA_H
#define MAGIKOOPA_H

#include "Range.h"
#include <string>
#include <iostream>
using namespace std;

class Magikoopa:public Range{
protected:
	string colorTraje;
public:
	Magikoopa();
	Magikoopa(string,string,int,int,int,double,double,int,string,string);
	string getColorTraje();
	virtual ~Magikoopa();
};
#endif
