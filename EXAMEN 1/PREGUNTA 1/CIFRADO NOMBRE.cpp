#include "cesar.h"

int cesar() {
	string msg;
	int clave;

	while (1) {
		cout << "SELECCIONA:\n1 => 1.ENCRIPTAR\n2 => 2.DESENCRIPTAR";

		char opt;
		do opt = _getch(); while (opt != '1' && opt != '2');
		system("cls");

		cout << "ESCRIBIR LA CLAVE: ";		
		cin >> clave;

		cout << "EL MENSAJE A ENCRIPTAR ES BISMARCK:\n";	
		string ws="BISMARCK";
		getline(ws, msg);

		if (opt == '1') {
			string nuevo = Sustitucion::Cifrar(msg);
			cout << "\nEL MENSAJE ESTA ENCRIPTADO: " << nuevo;
		} else {
			string nuevo = Sustitucion::Descifrar(msg);
			cout << "\nEL MENSAJE ESTA DESCIFRADO: " << nuevo;
		}
		_getch();
		system("cls");
	}
	return 0;
}
