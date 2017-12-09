#ifndef PARATROOPA_H
#define PARATROOPA_H

#include <string>
#include "Flying.h"

using namespace std;

class Paratroopa:public Flying{
private:
	string color;

public:
	Paratroopa(string, string, string, string, int,  int, double, double);
	Paratroopa();

	string getColor();

	void setColor(string);

	virtual ~Paratroopa();

};
#endif
