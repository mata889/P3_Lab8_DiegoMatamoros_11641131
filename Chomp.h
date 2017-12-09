#ifndef CHOMP_H
#define CHOMP_H

#include <string>
#include "Melee.h"

using namespace std;

class Chomp:public Melee{
private:
	string color;

public:
	Chomp(string, string, string, string, int,  int, double, double);
	Chomp();

	string getColor();

	void setColor(string);

	virtual ~Chomp();

};
#endif
