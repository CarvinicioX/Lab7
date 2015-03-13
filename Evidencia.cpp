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

void setNom(string nom){
	this->nom=nom;
}

void setTipo_objeto(string tipo_objeto){
	this->tipo_objeto=tipo_objeto;
}

void setLugar(string lugar){
	this->lugar=lugar;
}

void setHuellas(bool huellas){
	this->huellas=huellas;
}

void setProcesada(bool procesada){
	this->procesada=procesada;
}

string getNom() const{
	return nom;
}

string getTipo_objeto() const{
	return tipo_objeto;
}

string getLugar() const{
	return lugar;
}

bool getHuellas() const{
	return huellas;
}	
	
bool getProcesada() const{
	return procesada;
}
