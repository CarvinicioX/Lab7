#include "caso.h"
#include <string>
#include <sstream>
#include <vector>

using namespace std;

Caso::Caso(int numCaso, vector<Persona*> Invest, vector<Evidencia*> Evidence, string incidente, string fechaIncidente, bool cerrado) {
	this -> numCaso = numCaso;
	this -> Invest = Invest;
	this -> Evidence = Evidence;
	this -> incidente = incidente;
	this -> fechaIncidente = fechaIncidente;
	this -> cerrado = cerrado;
}

void Caso::setNumCaso(int numCaso) {
	this -> numCaso = numCaso;
}

void Caso::setInvestigador(Persona* investi) {
	Invest.push_back(investi);
}

void Caso::setEvidencia(Evidencia* eviden) {
	Evidence.push_back(eviden);
}

void Caso::setIncidente(string incidente) {
	this -> incidente = incidente;
}

void Caso::setFechaIncidente(string fechaIncidente) {
	this -> fechaIncidente = fechaIncidente;
}

void Caso::setCerrado(bool cerrado) {
	this -> cerrado = cerrado;
}

int Caso::getNumCaso()const {
	return numCaso;
}

Investigador Caso::getInvestigador(int n)const {
	return *Invest[n];
}

Evidencia Caso::getEvidencia(int n)const {
	return *Evidence[n];
}

string Caso::getIncidente()const {
	return incidente;
}

string Caso::getFechaIncidente()const {
	return fechaIncidente;
}

bool Caso::getCerrado()const {
	return cerrado;
}

string Caso::toString()const {
	stringstream ss;
	string Cerradobool = "Cerrado";
	if (cerrado) {
		Cerradobool = "Abierto";
	}
	ss << "Caso= Número de Caso: " << numCaso;
	for (int i = 0; i < Invest.size(); i++) {
		ss << ", Investigador #" << i + 1 << Invest[i]->toString();
	}
	for (int i = 0; i < Evidence.size(); ++i) {
		ss << ", Evidencia #" << i + 1 << Evidence[i]->toString();
	}
	ss << ", Incidente: " << incidente << ", Fecha Incidente: " << fechaIncidente << endl;
	return ss.str();
}