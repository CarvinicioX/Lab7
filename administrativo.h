#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H
#include <string>
#include "persona.h"
using std::string;
class Administrativo: public Persona{
    string clave, puesto;
public:
    Administrativo(string, string, string, int, string, string, string, string);
    string setClave(string);
    string setPuesto(string);
    void getClave();
    void getPuesto();
    virtual string toString();
};

#endif // ADMINISTRATIVO_H
