#include "administrativo.h"
#include "persona.h"
#include <string>
#include <sstream>
using namespace std;
Administrativo::Administrativo(string nombre_real, string usuario, string password, int edad, string birthdate, string identidad, string clave, string puesto):Persona(nombre_real, usuario, password, edad, birthdate, identidad){

}

void Administrativo::setClave(string clave){
    this->clave = clave;
}

void Administrativo::setPuesto(string){
    this->puesto = puesto;
}

string Administrativo::getClave(){
    return clave;
}

string Administrativo::getPuesto(){
    return puesto;
}

string Administrativo::toString(){
    stringstream ss;
    ss << Persona::toString();
    return ss.str();
}

int Administrativo::getId(){
	return 1;
}