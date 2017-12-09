#ifndef HAMMERBRO_H
#define HAMMERBRO_H
#include "Range.h"
#include <string>
#include <iostream>
using namespace std;

class HammerBro:public Range{
protected:
	string sizeMartillo;
public:
	HammerBro();
	HammerBro(string,string,int,int,int,double,double,int,string,string);
	string getSizeMartillo();
	virtual~HammerBro();
};
#endif
