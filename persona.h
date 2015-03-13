#ifndef PERSONA_H
#define PERSONA_H
#include <string>

using std::string;
class Persona{
        string nombre_real, usuario, password, identidad, birthdate;
        int edad;
public:
    Persona(string, string, string, int, string, string);
    string setNombre(string);
    string setUsuario(string);
    string setPassword(string);
    string setBirthdate(string);
    string setId(string);
    Persona(const Persona&);
    int setEdad(int);
    void getNombre()const;
    void getUsuario()const;
    void getPassword()const;
    void getId()const;
    void getBirthdate()const;
    virtual string toString()const;

};

#endif // PERSONA_H
