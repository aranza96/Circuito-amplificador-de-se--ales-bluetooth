//UNIVERSIDAD POLITECNICA DE TULANCINGO 
//INGENIERIA EN ELECTRONICA Y TELECOMUNICACIONES 
//PROGRAMACION DE PERIFERICOS 
//H361
//LUIS DOMINGUEZ ARANZA 
//1530098
//PRIMERA PRACTICA 
//FLUJO DE DATOS ENTRE CADENA DE CARACTERES 

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

string LeeTxt(string archivo);
bool escribeTxt(string archivo, string txt);
string capturaTxt();

int main()
{

	system("pause");
	return 0;
}

string LeeTxt(string archivo) { //Funcion para leer un texto.
	string texto, linea;
	ifstream miArchivo(archivo);
	if (miArchivo.is_open()) {
		texto = "";
		while (getline(miArchivo, linea)) {
			texto += linea;
		}
		miArchivo.close();
	}
	return texto;
}

bool escribeTxt(string archivo, string txt) {//Función que escribe.
	bool resu = false;
	ofstream elArchivo(archivo);
	if (elArchivo.is_open()) {
		elArchivo << txt;
		elArchivo.close();
		resu = true;
	}
	return resu;
}

string capturaTxt() {//Función para capturar txt.
	stringstream ss;
	string nombre, apelpat, apelmat;
	int edad;
	double peso, estatura;
	//Preguntar datos personoles
	ss << nombre << " " << apelpat << " " << apelmat << "," << edad << "," << peso << "," << estatura << endl;
	return ss.str();
}
