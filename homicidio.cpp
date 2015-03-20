#include "homicidio.h"
#include "caso.h"
#include <string>
#include <vector>
#include <sstream>

using namespace std;

Homicidio::Homicidio(int numCaso, vector<Investigador*> Invest, vector<Evidencia*> Evidence, string incidente, string fechaIncidente, bool cerrado, vector<string> Sospechosos, string SospechosoPrincipal, string NombreCulpable, string Victima):Caso(numCaso, Invest, Evidence, incidente, fechaIncidente, cerrado) {
	this -> Sospechosos = Sospechosos;
	this -> SospechosoPrincipal = SospechosoPrincipal;
	this -> NombreCulpable = NombreCulpable;
	this -> Victima = Victima;
}

void Homicidio::setSospechoso(string Sospechoso) {
	Sospechosos.push_back(Sospechoso);
}

void Homicidio::setSospechosoPrincipal(string SospechosoPrincipal) {
	this -> SospechosoPrincipal = SospechosoPrincipal;
}

void Homicidio::setNombreCulpable(string NombreCulpable) {
	this -> NombreCulpable = NombreCulpable;
}

void Homicidio::setVictima(string Victima) {
	this -> Victima = Victima;
}

string Homicidio::getSospechoso(int Indice)const {
	return Sospechosos.at(Indice);
}

string Homicidio::getSospechosoPrincipal()const {
	return SospechosoPrincipal;
}

string Homicidio::getNombreCulpable()const {
	return NombreCulpable;
}

string Homicidio::getVictima()const {
	return Victima;
}

string Homicidio::toString()const {
	stringstream ss;
	ss << Caso::toString();
	for (int i = 0; i < Sospechosos.size(); ++i) {
		ss << ", Sospechoso #" << i + 1 << ": " << Sospechosos[i];
	}
	ss << ", Sospechoso Principal: " << SospechosoPrincipal;
	if (this -> getCerrado()) {
		ss << ", Nombre del Culpable: " << NombreCulpable;
	}
	ss << ", Victima: " << Victima;
}