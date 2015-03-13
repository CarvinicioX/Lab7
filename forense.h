#ifndef FORENSE_H
#define FORENSE_H
#include <string>
#include "persona.h"

class Forense: public Persona{
    string ingreso, horario;
public:
    Forense(string, string, string, int, string, string, string, string);
    string setIngreso(string);
    string setHorario(string);
    void getIngreso();
    void getHorario();
    virtual string toString()const;
};

#endif // FORENSE_H
