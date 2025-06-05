#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
int main()
{ 
    SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x;
	string micadena = "Hola mundo";
	cout<<"La cadena original es: "<<micadena<<endl;
	char letra1 = micadena[0];//Acceder al primer caracter de la cadena
	cout<< "La primera letra es: "<<letra1<<endl;
	micadena[1] = 'e'; //Modificar el segundo caracter de la cadena
	cout<<"La cadena modificada es: "<<micadena<<endl;
	for(x=0;x<micadena.length();x++)
	cout<<micadena[x]<<"\n";
	return 0;
}
