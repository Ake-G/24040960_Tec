#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
using namespace std;
int main()
{ 
    SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	struct Estudiante{
	string nombre;
	float altura;
	int edad;
	int calificaciones[5];//Arreglo para almacenar las calificaciones de 5 materias
	int promedio;
};
Estudiante estudiante1;// Declara una variable de tipo estudiante
int suma=0;
//Ingreso de datos
	cout<<"Ingrese el nombre del estudiante: ";
	getline(cin, estudiante1.nombre);//cin>>estudiante1.nombre;
	cout<<"Ingresa la edad del estudiante: ";
	cin>>estudiante1.edad;
	//Ingresa las calificaciones
	cout<<"Ingresa las calificaciones de 5 materias:\n";
	for(int i=0;i<5;i++){
		cout<<"Calificacion de la unidad "<<i+1<<": ";
		cin>>estudiante1.calificaciones[i];
		suma=suma+estudiante1.calificaciones[i];
	}
	estudiante1.promedio=suma/5;
	//Mostramos la informacion ingresada
	cout<<"\nDatos del estudiante:\n";
	cout<<"Nombre: "<<estudiante1.nombre<<endl;
	cout<<"Edad: "<<estudiante1.edad<<endl;
	cout<<"Calificaciones: ";
	for(int i=0;i<5;i++){
/*	cout<<estudiante1.calificaciones[i]<<" ";*/
    cout<<"Unidad "<<i+1<<" "<<estudiante1.calificaciones[i]<<" ";
}
	cout<<"\nPromedio: "<<estudiante1.promedio;
	return 0;
}