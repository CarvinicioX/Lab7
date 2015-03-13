#include "Evidencia.h"
#include <string>
#include <sstream>

using namespace std;

Evidenca::Evidenca(string nom,string tipo_objeto,string lugar,bool huellas,bool procesada){
	setNom(nom);
	setTipo_objeto(tipo_objeto);
	setLugar(lugar);
 	setHuellas(huellas);
 	setProcesada(procesada);
 }
	
string Evidenca::toString() const{
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

void Evidenca::Evidenca::setNom(string nom){
	this->nom=nom;
}

void Evidenca::setTipo_objeto(string tipo_objeto){
	this->tipo_objeto=tipo_objeto;
}

void Evidenca::setLugar(string lugar){
	this->lugar=lugar;
}

void Evidenca::setHuellas(bool huellas){
	this->huellas=huellas;
}

void Evidenca::setProcesada(bool procesada){
	this->procesada=procesada;
}

string Evidenca::getNom() const{
	return nom;
}

string Evidenca::getTipo_objeto() const{
	return tipo_objeto;
}

string Evidenca::getLugar() const{
	return lugar;
}

bool Evidenca::getHuellas() const{
	return huellas;
}	
	
bool Evidenca::getProcesada() const{
	return procesada;
}
