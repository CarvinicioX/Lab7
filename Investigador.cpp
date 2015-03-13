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
	Investigador::toString() const;
	void setAbiertos(int);
	void setCerrados(int);
	void setSin_resolver(int);
	int getAbiertos() const;
	int getCerrados() const;
	int getSin_resolver() const;