#include "persona.h"
#include <string>
#include <sstream>
#include <iostream>

using std::string;
using std::stringstream;


Persona::Persona(string nombre_real, string usuario, string password, int edad, string birthdate, string identidad){
    setNombre(nombre_real);
    setUsuario(usuario);
    setPassword(password);
    setEdad(edad);
    setIdentidad(identidad);
    setBirthdate(birthdate);
}
void Persona::setNombre(string nombre_real){
    this->nombre_real = nombre_real;
}

void Persona::setUsuario(string usuario){
    this->usuario = usuario;
}

void Persona::setPassword(string password){
    this->password = password;
}

void Persona::setBirthdate(string birthdate){
    this->birthdate = birthdate;
}


void Persona::setEdad(int edad){
    this->edad = edad;
}
int Persona::getEdad(){
    return edad;
}
void Persona::setIdentidad(string identidad){
    this->identidad = identidad;
}

string Persona::getNombre()const{
    return nombre_real;
}
string Persona::getUsuario()const{
    return usuario;
}
string Persona::getPassword()const{
    return password;
}
string Persona::getIdentidad()const{
    return identidad;
}
string Persona::getBirthdate()const{
    return birthdate;
}
string Persona::toString()const{
    stringstream ss;
    ss << "Identidad: " << identidad << " Nombre" << nombre_real;
    return ss.str();
}
