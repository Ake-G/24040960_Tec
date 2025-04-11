#include<iostream>
#include<time.h>//random
#include<windows.h>
using namespace std;
int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,precio;
	srand(time(0));// Inicializar la semilla de numeros aleatorios
	precio=rand()%11;//Genera numero aleatorio entre 0 y 100
	do{
		cout<<"Dime el precio (entre 0 y 10): ";
		cin>>x;
		if(x>precio)
		 cout<<"Muy arriba\n";
		else
		 if(x<precio)
		  cout<<"Muy abajo\n";
		  else 
		  cout<<"Acertaste, el precio es: "<<precio; 
	}while(x!=precio);
	return 0;
}