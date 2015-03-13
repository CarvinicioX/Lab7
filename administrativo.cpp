#include "administrativo.h"
#include "persona.h"
#include <string>
#include <sstream>
Administrativo::Administrativo(string nombre_real, string usuario, string password, int edad, string birthdate, string identidad, string clave, string puesto):Persona(nombre_real, usuario, password, edad, birthdate, identidad){

}

string Administrativo::setClave(string clave){
    this->clave = clave;
}

string Administrativo::setPuesto(string){
    this->puesto = puesto;
}

void Administrativo::getClave(){
    return clave;
}

void Administrativo::getPuesto(){
    return puesto;
}

string Administrativo::toString(){
    stringstream ss;
    ss << Persona::toString();
    return ss.str();
}
