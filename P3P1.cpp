//UNIVERSIDAD POLITECNICA DE TULANCINGO
//INGENIERIA DE ELECTRONICA Y TELECOMUNICACIONES 
//PROGRAMACION DE PERIFERICOS 
//H381
//ARANZA LUIS DOMINGUEZ 
//USO DE VECTORES 

#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef struct alumno {//Creación de estructura.
	string codigo;
	string nombre;
	int edad;
}talumno;



int main()
{
	int n = 5;
	vector <int> lista;//Creación de un int tipo vector.
	lista.push_back(5);
	lista.push_back(7);
	lista.push_back(8);

	vector <int> lista1(n, 10);
	vector <int> lista2{ 10,20,30 };
	int arreaglo[] = { 50,100,150 };
	n = sizeof(arreaglo) / sizeof(arreaglo[0]);
	vector <int> lista3(arreaglo, arreaglo + n);

	for (int x : lista)// Por cada entero en lista(x) hasta el ultimo.
		cout << x << endl;
	for (int x : lista1)
		cout << x << endl;
	for (int x : lista2)
		cout << x << endl;
	for (int x : lista3)
		cout << x << endl;

	//Parte de la estructura.
	//Para el programa de programación solo se necesita esta parte.
	talumno* apt;
	vector <talumno> listado;

	apt = new talumno;//Creando un nuevo alumno.
	cout << endl << " Captura datos de alumno" << endl;
	cout << " Caputura el codigo:";
	cin >> apt->codigo;
	cout << " Captura el nombre: ";
	cin >> apt->nombre;
	cout << " Captura edad: ";
	cin >> apt->edad;
	listado.push_back(*apt);

	cout << endl;
	for (talumno x : listado) {
		cout << " codigo:  " << x.codigo << " Nombre:" << x.nombre << "  Edad:" << x.edad << endl;
	}

	system("pause");
	return 0;
}