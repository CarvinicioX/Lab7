#ifndef EVIDENCIA_H
#define EVIDENCIA_H

#include <string>

using std::string;

class Evidencia{
	string nom,tipo_objeto,lugar;
	bool huellas, procesada;
public:
	Evidencia(string,string,string,bool,bool);
	string toString() const;
	void setNom(string);
	void setTipo_objeto(string);
	void setLugar(string);
	void setHuellas(bool);
	void setProcesada(bool);
	string getNom() const;
	string getTipo_objeto() const;
	string getLugar() const;
	bool getHuellas() const;
	bool getProcesada() const;
};

#endif