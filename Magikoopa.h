#ifndef MAGIKOOPA_H
#define MAGIKOOPA_H

#include <string>
#include "Range.h"

using namespace std;

class Magikoopa:public Range{
private:
	string color;

public:
	Magikoopa(string, string, string, string, int,  int, double, double);
	Magikoopa();

	string getColor();

	void setColor(string);

	virtual ~Magikoopa();

};
#endif
