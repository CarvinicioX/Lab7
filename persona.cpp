#include "persona.h"
#include <string>
#include <iostream>
Persona::Persona(string nombre_real, string usuario, string password, int edad, string birthdate, string identidad){
    setNombre(nombre_real);
    setUsuario(usuario);
    setPassword(password);
    setEdad(edad);
    setId(identidad);
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

Persona::Persona(const Persona& object){
    nombre_real = object.nombre_real;
    usuario = object.usuario;
    password = object.password;
    edad = object.edad;
    birthdate = object.birthdate;
    identidad = object.identidad;

}

int Persona::setEdad(int edad){
    this->edad = edad;
}
string Persona::setId();

string Persona::getNombre()const{
    return nombre_real;
}
string Persona::getUsuario()const{
    return usuario;
}
string Persona::getPassword()const{
    return password;
}
string Persona::getId()const{
    return identidad;
}
string Persona::getBirthdate()const{
    return birthdate;
}
string Persona::toString()const{
    stringstream ss;
    ss << "Identidad: " << identidad << " Nombre" << nombre;
    return ss.str();
}

