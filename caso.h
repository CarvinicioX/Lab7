#ifndef CASOS_H
#define CASOS_H

#include <string>
#include <vector>
#include "Investigador.h"
#include "Evidencia.h"

using std::string;
using std::vector;

class Caso {
	int numCaso;
	vector <Persona*> Invest;
	vector <Evidencia*> Evidence;
	string incidente, fechaIncidente;
	bool cerrado;
public:
	Caso(int, vector<Persona*>, vector<Evidencia*>, string, string, bool);
	void setNumCaso(int);
	void setInvestigador(Persona*);
	void setEvidencia(Evidencia*);
	void setIncidente(string);
	void setFechaIncidente(string);
	void setCerrado(bool);
	int getNumCaso()const;
	Persona* getInvestigador(int)const;
	Evidencia getEvidencia(int)const;
	string getIncidente()const;
	string getFechaIncidente()const;
	bool getCerrado()const;
	virtual string toString()const;
	virtual int getTipo()=0;
};

#endif