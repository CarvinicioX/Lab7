#ifndef HOMICIDIO_H
#define HOMICIDIO_H

#include "caso.h"
#include <string>
#include <vector>

using namespace std;

class Homicidio: public Caso {
	vector<string> Sospechosos;
	string SospechosoPrincipal, NombreCulpable, Victima;
public:
	Homicidio(int, vector<Persona*>, vector<Evidencia*>, string, string, bool, vector<string>, string, string, string);
	void setSospechoso(string);
	void setSospechosoPrincipal(string);
	void setNombreCulpable(string);
	void setVictima(string);
	string getSospechoso(int)const;
	string getSospechosoPrincipal()const;
	string getNombreCulpable()const;
	string getVictima()const;
	virtual string toString()const;
};

#endif