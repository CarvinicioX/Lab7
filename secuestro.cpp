#include "caso.h"
#include "secuestro.h"
#include <string>
#include <vector>
#include "Evidencia.h"
#include "Investigador.h"
#include <sstream>

using namespace std;

Secuestro::Secuestro(int numCaso,vector<Investigador> Invest,vector<Evidencia> Evidence,string incidente,string fechaIncidente,bool cerrado,string nom_victima,string lugar_s,string motivo,int cant,bool rescate,bool estado)
	: Caso(numCaso,Invest,Evidence,incidente,fechaIncidente,cerrado){
		setNom_victima(nom_victima);
		setLugar_s(lugar_s);
		setRescate(rescate);
		setCant(cant);
		setEstado(estado);
		setMotivo(motivo);
	}
	//Secuestro( const Secuestro&);
	string Secuestro::toString() const{
		stringstream ss;
		string a="NO", n="MUERTO";
			if(rescate)
				a="SI";
			if(estado)
				n="VIVO";
		ss<<Caso::toString()<<" Nombre Victima : "<<nom_victima<<"Lugar : "<<lugar_s<<"Rescate : "<<a<<"Cantidad"<<a
		<<"Motivo : "<<motivo;
		return ss.str();	
	}

void Secuestro::setNom_victima(string nom_victima){
	this->nom_victima=nom_victima;
}

void Secuestro::setLugar_s(string lugar_s){
	this->lugar_s=lugar_s;
}

void Secuestro::setMotivo(string motivo){
	this->motivo=motivo;
}

void Secuestro::setCant(int cant){
	if(rescate){
		this->cant=cant;
	}else{
		this->cant=0;
	}
}

void Secuestro::setRescate(bool rescate){
	this->rescate=rescate;
}

void Secuestro::setEstado(bool estado){
	this->estado=estado;
}

string Secuestro::getNom_victima() const{
	return nom_victima;
}

string Secuestro::getLugar_s() const{
	return lugar_s;
}

string Secuestro::getMotivo() const{
	return motivo;
}

int Secuestro::getCant() const{
	return cant;
}

bool Secuestro::getRescate() const{
	return rescate;
}

bool Secuestro::getEstado() const{
	return estado;
}