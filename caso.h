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
	vector <Investigador> Invest;
	vector <Evidencia> Evidence;
	string incidente, fechaIncidente;
	bool cerrado;
public:
	Caso(int, vector<Investigador>, vector<Evidencia>, string, string, bool);
	void setNumCaso(int);
	void setInvestigador(Investigador);
	void setEvidencia(Evidencia);
	void setIncidente(string);
	void setFechaIncidente(string);
	void setCerrado(bool);
	int getNumCaso()const;
	Investigador getInvestigador()const;
	Evidencia getEvidencia()const;
	string getIncidente()const;
	string getFechaIncidente()const;
	bool getCerrado()const;
	virtual string toString()const;
};

#endif