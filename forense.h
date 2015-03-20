#ifndef FORENSE_H
#define FORENSE_H
#include <string>
#include "persona.h"


class Forense: public Persona{
    string ingreso, horario;
public:
    Forense(string, string, string, int, string, string, string, string);
    void setIngreso(string);
    void setHorario(string);
    string getIngreso();
    string getHorario();
    virtual string toString()const;
    virtual int getId();
};

#endif // FORENSE_H
