#include "secuestro.h"
#include "Investigador.h"
#include "administrativo.h"
#include "Evidencia.h"
#include "homicidio.h"
#include "forense.h"
#include "persona.h"
#include "caso.h"
#include <iostream>
#include <vector>

using namespace std;

int Menu();
int MenuAgregar();
int MenuAddPersonas();
int MenuAddCaso();
Persona* readPersona();
Evidencia* readEvidencia();
int MenuListar();

int main(int argc, char *argv[]){
	vector<Persona*> listpersonas;
	vector<Caso*> listcasos;
	vector<Evidencia*> listevidencias;
	int resp=1;	
		while(resp<3){
			resp=Menu();
			switch(resp){
				case 1:{
					int resp_peop=MenuAgregar();
					switch(resp_peop){
						case 1:{
							listpersonas.push_back(readPersona());
						}
						break;
						case 2:{
							int resp_caso=MenuAddCaso();
							switch(resp_caso){
								case 1:{

								}
								break;
								case 2:{

								}
								break;
							}//fin switch add caso
						}
						break;
						case 3:{
							listevidencias.push_back(readEvidencia());
						}
						break;
					}//fin switch add 
				}
				break;
				case 2:{
					int Resp = 0, Indice = 0;
			do {
		  		cout << "Que Desea Eliminar:\n1.Personal\n2.Caso\n3.Evidencia" << endl;
				cin >> Resp;
				if (Resp < 1 || Resp > 3) {
					cout << "Error Fuera de los Parametros\nIngrese Nuevamente" << endl;
				} else {
					break;
				}
			} while (true);
			if (Resp == 1 && listpersonas.empty()) {
				cout << "No hay Personal" << endl;
				break;
			}
			if (Resp == 2 && listcasos.empty()) {
				cout << "No hay Casos" << endl;
				break;
			}
			if (Resp == 3 && listevidencias.empty()) {
				cout << "No hay Evidencia" << endl;
				break;
			}
			switch (Resp) {
				case 1:
					{
						do {
							for (int i = 0; i < listpersonas.size(); ++i) {
								cout << i + 1 << listpersonas[i]->toString();
							}
							cout << "Ingrese el Sub-indice a Eliminar" << endl;
							cin >> Indice;
							Indice--;
							if (Indice < 0 || Indice > listpersonas.size() - 1) {
								cout << "Error Fuera de los Parametros\nIngrese Nuevamente" << endl;
							} else {
								break;
							}
						} while (true);
						delete listpersonas.at(Indice);
						listpersonas.erase(listpersonas.begin() + Indice);
					}
					break;
				case 2:
					{
						do {
							for (int i = 0; i < listcasos.size(); ++i) {
								cout << i + 1 << listcasos[i]->toString();
							}
							cout << "Ingrese el Sub-indice a Eliminar" << endl;
							cin >> Indice;
							Indice--;
							if (Indice < 0 || Indice > listcasos.size() - 1) {
								cout << "Error Fuera de los Parametros\nIngrese Nuevamente" << endl;
							} else {
								break;
							}
						} while (true);
						delete listcasos.at(Indice);
						listcasos.erase(listcasos.begin() + Indice);
					}
					break;
				case 3: 
					{
						do {
							for (int i = 0; i < listevidencias.size(); ++i) {
								cout << i + 1 << listevidencias[i]->toString();
							}
							cout << "Ingrese el Sub-indice a Eliminar" << endl;
							cin >> Indice;
							Indice--;
							if (Indice < 0 || Indice > listevidencias.size() - 1) {
								cout << "Error Fuera de los Parametros\nIngrese Nuevamente" << endl;
							} else {
								break;
							}
						} while (true);
						delete listevidencias.at(Indice);
						listevidencias.erase(listevidencias.begin() + Indice);
					}
					break;
			}
	
				}
				break;
				case 3:{
					int resp_1=MenuListar();
					switch(resp_1){
						case 1:{
							for (int i = 0; i < listpersonas.size(); ++i) {
								cout << i + 1 << listpersonas[i]->toString();
							}
						}
						break;
						case 2:{
							for (int i = 0; i < listcasos.size(); ++i) {
								cout << i + 1 << listcasos[i]->toString();
							}
						}
						break;
						case 3:{
							for (int i = 0; i < listevidencias.size(); ++i) {
								cout << i + 1 << listevidencias[i]->toString();
							}
						}
						break;
					}
				}
				break;
				case 4:{
					cout<<"ADIOS"<<endl;
				}
			}//fin switch
		}//fin while
	return 0;
}

int MenuListar(){
	int x;
	cout<<"__________MENU_LISTAR__________"<<endl;
	cout<<"1. Listar Personas"<<endl;
	cout<<"2. Listar Casos"<<endl;
	cout<<"3. Listar Evidencias"<<endl;
	cin>>x;
	if(x<1||x>3){
		x=3;
	}
	return x;
}

int Menu(){
	int x;
	cout<<"_________MENU__________"<<endl;
	cout<<"1. Agregar"<<endl;
	cout<<"2. Eliminar"<<endl;
	cout<<"3. Reporte"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"_______________________"<<endl;
	cin>>x;
	if(x>4||x<1){
		x=3;
	}
	return x;
}

int MenuAgregar(){
	int x;
	cout<<"_________MENU_AGREGAR___________"<<endl;
	cout<<"1. Agregar Persona"<<endl;
	cout<<"2. Agregar Caso"<<endl;
	cout<<"3. Agregar Evidencia"<<endl;
	cout<<"________________________________"<<endl;
	cin>>x;
	if(x>3||x<1){
		x=3;
	}
	return x;
}

int MenuAddPersonas(){
	int x;
	cout<<"_________MENU_AGREGAR_PERSONAS___________"<<endl;
	cout<<"1. Agregar Personal Administrativo"<<endl;
	cout<<"2. Agregar Investigador"<<endl;
	cout<<"3. Agregar Forense"<<endl;
	cin>>x;
	if(x>3||x<1){
		x=3;
	}
	return x;
}

int MenuAddCaso(){
	int x;
	cout<<"_________MENU_AGREGAR_CASOS__________"<<endl;
	cout<<"1. Agregar Homicidio"<<endl;
	cout<<"2. Agregar Secuestro"<<endl;
	cin>>x;
	if(x<1||x>2){
		x=2;
	}
	return x;
}

Persona* readPersona(){
    int tipo;
    do{
        cout << "Que tipo de persona desea agregar: " << endl <<
                "1. Administrativo" << endl <<
                "2. Forense" << endl <<
                "3. Investigador" << endl <<
                "-->";
        cin >> tipo;
        if(tipo < 1 || tipo >3){
            cerr << "Solo hay tres opciones, escoja una";
        }
    }while(tipo < 1 || tipo >2);
    string nombre_real, usuario, password, birthdate, identidad;
    unsigned int edad;

    if(tipo == 1){
        string clave, puesto;
        cout << "Ingreso de Datos de Administrativo" << endl;
        cout << "Nombre: ";
        cin >> nombre_real;
        cout << "Usuario: ";
        cin >> usuario;
        cout << "Contraseña: ";
        cin >> password;
        cout << "Edad: ";
        cin >> edad;
        cout << "ID: ";
        cin >> identidad;
        cout << "Clave de ingreso al sistema: ";
        cin >> clave;
        cout << "Puesto en organigrama: ";
        cin >> puesto;

        return new Administrativo(nombre_real, usuario, password, edad, birthdate, identidad, clave, puesto);
    }else if(tipo==2){
        string ingreso, horario;
        cout << "Ingreso de Datos de Forense" << endl;
        cout << "Nombre: ";
        cin >> nombre_real;
        cout << "Usuario: ";
        cin >> usuario;
        cout << "Contraseña: ";
        cin >> password;
        cout << "Edad: ";
        cin >> edad;
        cout << "ID: ";
        cin >> identidad;
        cout << "Fecha de ingreso a la organizacion: ";
        cin >> ingreso;
        cout << "Horario: ";
        cin >> horario;
        return new Forense(nombre_real, usuario, password, edad, birthdate, identidad, ingreso, horario);
    }else{
        int abiertos, cerrados, sin_resolver;
        cout << "Ingreso de Datos de Investigador" << endl;
        cout << "Nombre: ";
        cin >> nombre_real;
        cout << "Usuario: ";
        cin >> usuario;
        cout << "Contraseña: ";
        cin >> password;
        cout << "Edad: ";
        cin >> edad;
        cout << "ID: ";
        cin >> identidad;
        cout << "Casos abiertos: ";
        cin >> abiertos;
        cout << "Casos cerrados: ";
        cin >> cerrados;
        cout <<"Casos sin resolver: ";
        cin >> sin_resolver;
        return new Investigador(nombre_real, usuario, password, edad, birthdate, identidad, abiertos, cerrados, sin_resolver);
    }

}

Evidencia* readEvidencia(){
    string nom, tipo_objeto, lugar;
    int asd;
    bool huellas, procesada;
    cout << "Ingreso de datos de Evidencia" << endl;
    cout << "Nombre: ";
    cin >> nom;
    cout << "Tipo de objeto: ";
    cin >> tipo_objeto;
    cout << "¿Tiene huellas? (1. si, 2. no)";
    cin >> asd;
    while(asd<1||asd>2){
        cerr << "solo hay dos opciones..." << endl;
        cout << "Tiene huellas (1. si, 2. no)";
        cin >> asd;
    }
    if(asd==1){
        huellas=true;
    }else{
        huellas=false;
    }
    cout << "¿Procesada? (1. si, 2. no)";
    cin >> asd;
    while(asd<1||asd>2){
        cerr << "solo hay dos opciones..." << endl;
        cout << "¿Procesada? (1. si, 2. no)";
        cin >> asd;
    }
    if(asd==1){
        procesada=true;
    }else{
        procesada=false;
    }
    return new Evidencia(nom, tipo_objeto, lugar, huellas, procesada);
}