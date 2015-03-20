#ifndef PERSONA_H
#define PERSONA_H
#include <string>


using std::string;
class Persona{
        string nombre_real, usuario, password, identidad, birthdate;
        int edad;
public:
    Persona(string, string, string, int, string, string);
    void setNombre(string);
    void setUsuario(string);
    void setPassword(string);
    void setBirthdate(string);
    void setIdentidad(string);
    void setEdad(int);
    string getNombre()const;
    string getUsuario()const;
    string getPassword()const;
    string getIdentidad()const;
    int getEdad();
    string getBirthdate()const;
    virtual string toString()const;
    virtual int getId()=0;

};

#endif // PERSONA_H
