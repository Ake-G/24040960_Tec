#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
using namespace std;
struct Persona{
	string nombre;
	float altura;
	int edad;
};
int main()
{ 
    SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	//Declaracion de una variable tipo 'Persona'
	Persona personal;
	//Entrada de datos
	cout<<"Ingrese el nombre: ";
	getline(cin, personal.nombre);//cin>>personal.nombre;
	cout<<"Ingresa la edad: ";
	cin>>personal.edad;
	cout<<"Ingrese la altura (en metros): ";
	cin>>personal.altura;
	//Salida de datos
	cout<<"\nDatos de la persona:\n";
	cout<<"Nombre: "<<personal.nombre<<"\n";
	cout<<"Edad: "<<personal.edad<<" años "<<endl;
	cout<<"Altura: "<<personal.altura<<" m"<<endl;
	return 0;
}