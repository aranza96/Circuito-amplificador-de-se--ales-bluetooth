#include <iostream>
#include <vector>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

class persona {
private:
	string nombre;
	int edad;
	string genero;
	string direccion;
	string email;
	string telefono;
public:
	persona(string, int, string, string, string, string);
	void sujeto();
};

persona::persona(string _nombre,int _edad,string _genero,string _direccion,string _email,string _telefono) {
	nombre = _nombre;
	edad = _edad;
	genero = _genero;
	direccion = _direccion;
	email = _email;
	telefono = _telefono;

}
void persona::sujeto() {
	string M = "M";
	string mu = "femenimo";
	string ho = "masculino";
	if (genero == M) {
		genero = mu;
	}
	else
	{
		genero = ho;
	}

	ifstream archivo("mina.txt");///llamando al archivo 
	archivo.open("mina.txt", ios::in);///nombre del blog de notas 
	if (archivo.fail()) {
		cout << "no se pudo abrir el archivo";
		exit(1);
	}
	if (archivo.is_open()) {
		cout << "se abrio el archivo";/// si esta abierto 
		while (!archivo.eof()) {   ///captura de datos 
			archivo >> nombre >> edad >> genero >> direccion >> email >> telefono;
			if (!archivo.eof()) {
				cout << "registro=======\n";
				cout << "nombre: " << nombre << endl;
				cout << "edad: " << edad << endl;
				cout << "genero: " << genero << endl;
				cout << "direccion: " << direccion << endl;
				cout << "telefono: " << telefono << endl;
				cout << "email: " << email << endl;
			}

		}
		
	}
}

int main() {
	system("pause");
	return 0;
}
