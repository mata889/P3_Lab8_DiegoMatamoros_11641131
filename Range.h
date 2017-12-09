#ifndef RANGE_H
#define RANGE_H

#include "Minion.h"
#include <string>

using namespace std;

class Range:public Minion{
private:
	string rango;

public:
	Range(string, string, string, int, int, double, double);
	Range();

	string getRango();

	void setRango(string);

	virtual ~Range();

};
#endif
