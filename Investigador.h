#ifndef INVESTIGADOR_H
#define INVESTIGADOR_H

#include <string>
#include "persona.h"

using namespace std;

class Investigador : public Persona{
	int abiertos,cerrados,sin_resolver;
public:
	Investigador(string, string, string, int, string, string,int,int,int);
	virtual string toString() const;
	void setAbiertos(int);
	void setCerrados(int);
	void setSin_resolver(int);
	int getAbiertos() const;
	int getCerrados() const;
	int getSin_resolver() const;
	virtual int getId();

};

#endif