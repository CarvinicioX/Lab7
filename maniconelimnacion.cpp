case 2://listpersonas // listcasos // listevidencias
	{
		int Resp = 0, Indice = 0;
			do {
		  		cout << "Que Desea Eliminar:\n1.Personal\n2.Caso\n3.Evidencia" << endl;
				cin >> Resp;
				if (Resp < 1 || Resp > 3) {
					cout << "Error Fuera de los Parametros\nIngrese Nuevamente" << endl;
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
								cout << i + 1 << listpersonas[i].toString();
							}
							cout << "Ingrese el Sub-indice a Eliminar" << endl;
							cin >> Indice;
							Indice--;
							if (Indice < 0 || Indice > listpersonas.size() - 1) {
								cout << "Error Fuera de los Parametros\nIngrese Nuevamente" << endl;
							}
						} while (true);
						listpersonas.erase(listpersonas.begin() + Indice);
					}
					break;
				case 2:
					{
						do {
							for (int i = 0; i < listcasos.size(); ++i) {
								cout << i + 1 << listcasos[i].toString();
							}
							cout << "Ingrese el Sub-indice a Eliminar" << endl;
							cin >> Indice;
							Indice--;
							if (Indice < 0 || Indice > listcasos.size() - 1) {
								cout << "Error Fuera de los Parametros\nIngrese Nuevamente" << endl;
							}
						} while (true);
						listcasos.erase(listcasos.begin() + Indice);
					}
					break;
				case 3: 
					{
						do {
							for (int i = 0; i < listevidencias.size(); ++i) {
								cout << i + 1 << listevidencias[i].toString();
							}
							cout << "Ingrese el Sub-indice a Eliminar" << endl;
							cin >> Indice;
							Indice--;
							if (Indice < 0 || Indice > listevidencias.size() - 1) {
								cout << "Error Fuera de los Parametros\nIngrese Nuevamente" << endl;
							}
						} while (true);
						listevidencias.erase(listevidencias.begin() + Indice);
					}
					break;
			}
	}
	break;