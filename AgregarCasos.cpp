Caso* agregarCaso(const vector<Persona*>&, const vector<Evidencia*>&);

Caso* agregarCaso(const vector<Persona*>& listpersonas, const vector<Evidencia*>& listevidencias) {
	int numCaso, Resp = 0, Indice = 0;
	vector<Investigador*> Invest;
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
		if (Indice < 1 || > listpersonas.size() - 1) {
			cout << "Error Fuera de los Parametros\nIngrese Nuevamente" << endl;
		} else {
			Invest.push_back(listpersonas[Indice]);
			cout << "Agregado" << endl;
		}
	} while (true);
	do {
		for (int i = 0; i < listevidencias.size(); ++i) {
			if (listevidencias[i]->getId() == 2) {
				cout << i + 1 << listevidencias[i]->toString() << endl;
			}
		}
		cout << "Ingrese el Sub-indice de la Evidencia(Si Ingresa \"0\" se Tomara Como que Quiere Salir)" << endl;
		cin >> Indice;
		if (Indice == 0) {
			break;
		}
		if (Indice < 1 || > listevidencias.size() - 1) {
			cout << "Error Fuera de los Parametros\nIngrese Nuevamente" << endl;
		} else {
			Invest.push_back(listevidencias[Indice]);
			cout << "Agregado" << endl;
		}
	} while (true);
	cout << "Ingrese el Incidente" << endl;
	cin >> Incidente;
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
				cin > Victima;
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
				bool rescate, bool estado;
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
				cin >> estado;
				return new Secuestro(numCaso, Invest, Evidence, incidente, fechaIncidente, cerrado, nom_victima, lugar_s, motivo, cant, rescate, estado)
			}
			break;
	}
}