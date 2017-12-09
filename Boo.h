#ifndef BOO_H
#define BOO_H

#include <string>
#include "Flying.h"

using namespace std;

class Boo:public Flying{
private:
	string color;

public:
	Boo(string, string, string, string, int,  int, double, double);
	Boo();

	string getColor();

	void setColor(string);

	virtual ~Boo();

};
#endif
