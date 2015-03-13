#include "homicidio.h"
#include "caso.h"
#include <string>
#include <vector>
#include <sstream>

using namespace std;

Homicidio::Homicidio(int numCaso, vector<Investigador> Invest, vector<Evidencia> Evidence, string incidente, string fechaIncidente, bool cerrado, vector<string> Sospechosos, string SospechosoPrincipal, string NombreCulpable, string Victima) {
	Caso(numCaso, Invest, Evidence, incidente, fechaIncidente, cerrado);
	this -> Sospechosos = Sospechosos;
}

void Homicidio::setSospechoso(string);
void Homicidio::setSospechosoPrincipal(string);
void Homicidio::setNombreCulpable(string);
void Homicidio::setVictima(string);
string Homicidio::getSospechoso(int)const;
string Homicidio::getSospechosoPrincipal()const;
string Homicidio::getNombreCulpable()const;
string Homicidio::getVictima()const;
string Homicidio::toString()const {
	stringstream ss;
	ss << Caso::toString();
	for (int i = 0; i < Sospechosos.size(); ++i) {
		ss << ", Sospechoso #" << i + 1 << ": " << Sospechosos[i];
	}
	ss << ", Sospechoso Principal: " << SospechosoPrincipal;
	if (this -> cerrado) {
		ss << ", Nombre del Culpable: " << NombreCulpable;
	}
	ss << ", Victima: " << Victima;
}