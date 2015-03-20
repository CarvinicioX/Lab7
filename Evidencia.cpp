#include "Evidencia.h"
#include <string>
#include <sstream>

using namespace std;

Evidencia::Evidencia(string nom,string tipo_objeto,string lugar,bool huellas,bool procesada){
	setNom(nom);
	setTipo_objeto(tipo_objeto);
	setLugar(lugar);
 	setHuellas(huellas);
 	setProcesada(procesada);
 }
	
string Evidencia::toString() const{
	stringstream ss;
	string a="NO";
		if(huellas)
			a="SI";
	string v="NO";
		if(procesada)
			v="SI";
	ss<<"Nombre : "<<nom<<"Tipo de Objeto : "<<tipo_objeto<<"Lugar : "<<lugar<<"Huellas : "<<a<<"Procesada :  "<<v;
	return ss.str();
}

void Evidencia::Evidencia::setNom(string nom){
	this->nom=nom;
}

void Evidencia::setTipo_objeto(string tipo_objeto){
	this->tipo_objeto=tipo_objeto;
}

void Evidencia::setLugar(string lugar){
	this->lugar=lugar;
}

void Evidencia::setHuellas(bool huellas){
	this->huellas=huellas;
}

void Evidencia::setProcesada(bool procesada){
	this->procesada=procesada;
}

string Evidencia::getNom() const{
	return nom;
}

string Evidencia::getTipo_objeto() const{
	return tipo_objeto;
}

string Evidencia::getLugar() const{
	return lugar;
}

bool Evidencia::getHuellas() const{
	return huellas;
}	
	
bool Evidencia::getProcesada() const{
	return procesada;
}
