#include "forense.h"
#include <string>
Forense::Forense(string nombre_real, string usuario, string password, int edad, string birthdate, string identidad, string ingreso, string horario):Persona(nombre_real, usuario, password, edad, birthdate, identidad){

}

string Forense::setIngreso(string ingreso){
    this->ingreso = ingreso;
}

string Forense::setHorario(string horario){
    this->horario = horario;
}

void getIngreso(){

}

void getHorario(){

}

virtual string toString()const{

}
