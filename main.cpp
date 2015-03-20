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
int identifyingPerson(vector<Persona*>);
Caso* agregarCaso(const vector<Persona*>&, const vector<Evidencia*>&);

int main(int argc, char *argv[]){
	vector<Persona*> listpersonas;
	vector<Caso*> listcasos;
	vector<Evidencia*> listevidencias;
	int resp=1;

		while(resp<4){
			while(listpersonas.size()<5){
				listpersonas.push_back(readPersona());
			}
			int id=identifyingPerson(listpersonas);
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
							listcasos.push_back(agregarCaso(listpersonas,listevidencias));
						}
						break;
						case 3:{
							if (id==2){
								listevidencias.push_back(readEvidencia());
							}	
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
								cout << i + 1 << listpersonas[i]->toString() << endl;;
							}
						}
						break;
						case 2:{
							if(id==1){
								for (int i = 0; i < listcasos.size(); ++i) {
									if(listcasos[i]->getTipo()==1)
									cout << i + 1 << listcasos[i]->toString() << endl;
							}
							}else if(id==3){
								for (int i = 0; i < listcasos.size(); ++i) {
									if(listcasos[i]->getTipo()==2)
									cout << i + 1 << listcasos[i]->toString() << endl;
							}	
							}
								for (int i = 0; i < listcasos.size(); ++i) {
									cout << i + 1 << listcasos[i]->toString() << endl;
							}
							
						}
						break;
						case 3:{
							for (int i = 0; i < listevidencias.size(); ++i) {
								cout << i + 1 << listevidencias[i]->toString() << endl;
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
    }while(tipo < 1 || tipo >3);
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
int identifyingPerson(vector<Persona*>listpersonas){
    int pos;
    int id, control=0;
    string pass;
    while(control==0){
    if(listpersonas.size()==0){
    	return 0;
    }else{
	    cout << "Aqui estan todas las personas: " << endl;
	    for (int i = 0; i < listpersonas.size(); ++i)
	    {
	        cout << i << ": " << listpersonas[i]->getUsuario() << endl;
	    }
	    cout << "Seleccione la posicion de la persona que quiere: ";
	    cin >> pos;
	    cout << "password: ";
	    cin >> pass;
	    if (listpersonas[pos]->getPassword() != pass)
	    {
	    	cerr << "WRONG PASSWORD!" << endl << endl;
	    	control=0;
	    }else{
	    	control=9;
	    }
	    
	    id=listpersonas[pos]->getId();

	    	
    }
    return id;
}
    
    
}

Caso* agregarCaso(const vector<Persona*>& listpersonas, const vector<Evidencia*>& listevidencias) {
	int numCaso, Resp = 0, Indice = 0;
	vector<Persona*> Invest;
	vector<Evidencia*> Evidence;
	string incidente, fechaIncidente;
	bool cerrado;
	do {
		cout << "Agregar Caso\n1.Homicidio\n2.Secuestro" << endl;
		cin >> Resp;
		if (Resp < 1 || Resp > 2) {
			cout << "Error Fuera de los Parametros\nIngrese Nuevamente" << endl;
		} else {
			break;
		}
	} while (true);
	cout << "Ingrese el # de Caso" << endl;
	cin >> numCaso;
	do {
		for (int i = 0; i < listpersonas.size(); ++i) {
			if (listpersonas[i]->getId() == 2) {
				cout << i + 1 << listpersonas[i]->toString() << endl;
			}
		}
		cout << "Ingrese el Sub-indice del Investigador(Si Ingresa \"0\" se Tomara Como que Quiere Salir)" << endl;
		cin >> Indice;
		if (Indice == 0) {
			break;
		}
		if (Indice < 1 || Indice > listpersonas.size() - 1) {
			cout << "Error Fuera de los Parametros\nIngrese Nuevamente" << endl;
		} else {
			Invest.push_back(listpersonas[Indice]);
			cout << "Agregado" << endl;
		}
	} while (true);
	do {
		for (int i = 0; i < listevidencias.size(); ++i) {
			
				cout << i + 1 << listevidencias[i]->toString() << endl;
			
		}
		cout << "Ingrese el Sub-indice de la Evidencia(Si Ingresa \"0\" se Tomara Como que Quiere Salir)" << endl;
		cin >> Indice;
		if (Indice == 0) {
			break;
		}
		if (Indice < 1 || Indice > listevidencias.size() - 1) {
			cout << "Error Fuera de los Parametros\nIngrese Nuevamente" << endl;
		} else {
			Evidence.push_back(listevidencias[Indice]);
			cout << "Agregado" << endl;
		}
	} while (true);
	cout << "Ingrese el Incidente" << endl;
	cin >> incidente;
	cout << "Ingrese la Fecha del Incidente" << endl;
	cin >> fechaIncidente;
	cout << "Esta Cerrado el Caso[1.Si/0.No]" << endl;
	cin >> cerrado;
	switch (Resp) {
		case 1:
			{
				vector<string> Sospechosos;
				string SospechosoPrincipal, NombreCulpable, Victima, Sospechoso;
				while (true) {
					cout << "Ingrese el Nombre del Sospechoso(Si Ingresa \"no\" se Tomara Como Que ya no Seguira Ingresando Sospechosos)" << endl;
					cin >> Sospechoso;
					if (Sospechoso == "no") {
						break;
					} else {
						Sospechosos.push_back(Sospechoso);
					}
				}
				cout << "Ingrese el Sospechoso Principal" << endl;
				cin >> SospechosoPrincipal;
				cout << "Ingrese la Victima" << endl;
				cin >> Victima;
				if (cerrado) {
					cout << "Ingrese el Culpable" << endl;
					cin >> NombreCulpable;
				} else {
					NombreCulpable = "";
				}
				return new Homicidio(numCaso, Invest, Evidence, incidente, fechaIncidente, cerrado, Sospechosos, SospechosoPrincipal, NombreCulpable, Victima);
			}
			break;
		case 2:
			{
				string nom_victima, lugar_s, motivo;
				int cant;
				bool rescate;
				bool estado;
				cout << "Ingrese el Nombre de la Victima" << endl;
				cin >> nom_victima;
				cout << "Ingrese el Lugar de Secuestro" << endl;
				cin >> lugar_s;
				cout << "Ingrese el Motivo" << endl;
				cin >> motivo;
				cout << "Se Pidio Rescate[1.Si/0.No]" << endl;
				cin >> rescate;
				if (rescate) {
					cout << "Ingrese el Monto del Rescate" << endl;
					cin >> cant;
				} else {
					cant = 0;
				}
				cout << "Esta Viva la Victima[1.Si/0.No]" << endl;
				int cx;
				cin>>cx;
				if(cx==1){
					estado=true;
				}else{
					estado=false;
				}
				return new Secuestro(numCaso, Invest, Evidence, incidente, fechaIncidente, cerrado, nom_victima, lugar_s, motivo, cant, rescate, estado);
			}
			break;
	}
}