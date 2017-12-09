#ifndef FLYING_H
#define FLYING_H

#include "Minion.h"
#include <string>



class Flying : public Minion{
private:
	string vuelo;

public:
	Flying();
	Flying(string, string, string, int, int, double, double);


	string getVuelo();

	void setVuelo(string);

	virtual ~Flying();

};
#endif
