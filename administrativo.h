#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H
#include <string>
using std::string;
class Administrativo: public Persona{
    string clave, puesto;
public:
    Administrativo(string, string, string, int, string, string, string, string);
    Administrativo(const Administrativo&);
    string setClave(string);
    string setPuesto(string);
    void getClave();
    void getPuesto();
    virtual toString();
};

#endif // ADMINISTRATIVO_H
