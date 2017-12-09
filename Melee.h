#ifndef MELEE_H
#define MELEE_H

#include "Minion.h"
#include <string>

using namespace std;

class Melee:public Minion{
private:
	string intimidar;

public:
	Melee(string, string, string, int, int, double, double);
	Melee();

	string getIntimidar();

	void setIntimidar(string);

	virtual ~Melee();

};
#endif
