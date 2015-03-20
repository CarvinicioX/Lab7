#include "forense.h"
#include "persona.h"
#include <string>
#include <sstream>

using namespace std;
Forense::Forense(string nombre_real, string usuario, string password, int edad, string birthdate, string identidad, string ingreso, string horario):Persona(nombre_real, usuario, password, edad, birthdate, identidad){
	setIngreso(ingreso);
	setHorario(horario);
}

void Forense::setIngreso(string ingreso){
    this->ingreso = ingreso;
}

void Forense::setHorario(string horario){
    this->horario = horario;
}

string Forense::getIngreso(){
    return ingreso;
}

string Forense::getHorario(){
    return horario;
}

string Forense::toString()const{
    stringstream ss;
    ss << Persona::toString();
    return ss.str();
}

int Forense::getId(){
	return 3;
}
