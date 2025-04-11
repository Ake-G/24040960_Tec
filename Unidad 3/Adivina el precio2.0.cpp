#include<iostream>
#include<time.h>//random
#include<windows.h>
using namespace std;
int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,precio,ls,li;
	do{
		cout<<"Dame el limite inferior: ";
		cin>>li;
		cout<<"Dame el limite superior: ";
		cin>>ls;
	}while(li>=ls);
	do{
		cout<<"Dime el precio (entre "<<li<<" y "<<ls<<"): ";
		cin>>precio;
	}while (precio<li or precio>ls);
	system("cls");
	do{
		cout<<"Atinale al precio: ";
		cin>>x;
		if(x>precio)
		 cout<<"Muy arriba\n";
		else 
		 if (x<precio)
		 cout<<"Muy abajo\n";
		 else
		  cout<<"Acertaste, el precio es: "<<precio;
	}while(x!=precio);
	return 0;
}