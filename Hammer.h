#ifndef HAMMER_H
#define HAMMER_H

#include <string>
#include "Range.h"

using namespace std;

class Hammer:public Range{
private:
	string size;

public:
	Hammer(string, string, string, string, int,  int, double, double);
	Hammer();

	string getSize();

	void setSize(string);

	virtual ~Hammer();

};
#endif
