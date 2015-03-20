#include "Investigador.h"
#include "persona.h"
#include <string>
#include <sstream>

using namespace std;

Investigador::Investigador(string nombre_real, string usuario, string password, int edad, string birthdate, string identidad,int abiertos,int cerrados,int sin_resolver)
	: Persona(nombre_real, usuario, password,edad, identidad, birthdate){
		setAbiertos(abiertos);
		setCerrados(cerrados);
		setSin_resolver(sin_resolver);
	}

	Investigador::toString() const{
		stringstream ss;
		ss<<Persona::toString()<<"Casos Abiertos: "<<abiertos<<"Casos Cerrados: "<<cerrados<<"Casos sin Resolver: "
		<<sin_resolver;
		return ss.str(); 
	}

	void Investigador::setAbiertos(int abiertos){
		this->abiertos=abiertos;
	}

	void Investigador::setCerrados(int cerrados){
		this->cerrados=cerrados;
	}

	void Investigador::setSin_resolver(int){
		this->sin_resolver=sin_resolver;
	}

	int Investigador::getAbiertos() const{
		return abiertos;
	}

	int Investigador::getCerrados() const{
		return cerrados;
	}

	int Investigador::getSin_resolver() const{
		return sin_resolver;
	}