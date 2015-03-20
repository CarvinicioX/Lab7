Persona* readPersona(){
    int tipo;
    do{
        cout << "Que tipo de empleado quiere contratar: " << endl <<
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
        int abiertos, cerrados, sin_resolver
        cout << "Ingreso de Datos de Investigador" << endl;
        cout << "Nombre: ";
        cin >> name;
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
    do{
        cerr << "solo hay dos opciones..." << endl;
        cout << "Tiene huellas (1. si, 2. no)";
        cin >> asd;
    }while(asd>2 || asd <1);
    if(asd==1){
        huellas=true;
    }else{
        huellas=false;
    }
    cout << "¿Procesada? (1. si, 2. no)";
    cin >> asd;
    do{
        cerr << "solo hay dos opciones..." << endl;
        cout << "¿Procesada? (1. si, 2. no)";
        cin >> asd;
    }while(asd>2 || asd <1);
    if(asd==1){
        procesada=true;
    }else{
        procesada=false;
    }
}