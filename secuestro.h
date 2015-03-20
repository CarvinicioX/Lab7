#ifndef SECUESTRO_H
#define SECUESTRO_H

#include "caso.h"
#include <string>
#include <vector>
#include "Evidencia.h"
#include "Investigador.h"

using namespace std;

class Secuestro : public Caso{
	string nom_victima,lugar_s,motivo;
	int cant;
	bool rescate, estado;
public:
	Secuestro(int,vector<Persona*>,vector<Evidencia*>,string,string,bool,string,string,string,int,bool,bool);
	Secuestro( const Secuestro&);
	virtual string toString() const;
	void setNom_victima(string);
	void setLugar_s(string);
	void setMotivo(string);
	void setCant(int);
	void setRescate(bool);
	void setEstado(bool);
	string getNom_victima() const;
	string getLugar_s() const;
	string getMotivo() const;
	int getCant() const;
	bool getRescate() const;
	bool getEstado() const;
	virtual int getTipo();
};

#endif