#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H
#include <string>
#include "persona.h"
using std::string;
class Administrativo: public Persona{
    string clave, puesto;
public:
    Administrativo(string, string, string, int, string, string, string, string);
    void setClave(string);
    void setPuesto(string);
    string getClave();
    string getPuesto();
    virtual string toString();
    virtual int getId();
    

};

#endif // ADMINISTRATIVO_H
