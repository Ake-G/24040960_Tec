#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
using namespace std;
int main()
{ 
    SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	struct Estudiante {
		string nombre;
		int edad;
		int calificaciones [3];//Array p/calificaciones 3 materias
	};
	int numEstu;//Numero de estudiantes a almacenar
	cout<<"Ingresa la cantidad de estudiantes: ";
	cin>>numEstu;
	cin.ignore();
	Estudiante estudiantes[numEstu];//Arreglo de estructuras Estudiante
	//Ingresa de datos para cada estudiante
	for(int i=0;i<numEstu;i++){
		cout<<"\nIngresa los datos del estudiante #"<<i+1<<":\n";
		cout<<"Nombre: ";
		getline(cin,estudiantes[i].nombre);
		cout<<"Edad: ";
		cin>>estudiantes.edad;
		//Ingresamos las calificaciones
		cout<<"Ingresa las calificaciones de 3 materias:\n";
		for(int j=0;j<3;j++){
			cout<<"Calificaciones #"
		}
	}