#include<iostream>
#include<windows.h>
using namespace std;
int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,y=1;
	cout<<"Lectura de 5 numeros enteros usando do while\n";
	do{
		cout<<"Dame un numero que no sea 0 (intento #"<<y<<")\n";
		cin>>x;
		if(x==0)
		 continue;
		cout<<"Por aqui solo pasa cuando el numero es diferente de 0\n";
		y++;
	}while(y<6);
	system("pause");
	/*en ciclos do while o while con contador un continue afecta
	el numero de vueltas originales, si estan definidas 5 vueltas,
	se ejecutaran 5 vueltas validas, aunque se hayan ejecutado 10 
	no validas, dando un total de 15 repeticones, en un ciclo for
	estandar esto no ocurre, si son 5 vueltas validas solo se daran
	5 vueltas, sean o no validas*/
	system("cls");
	cout<<"Lectura de 5 numeros enteros usando un for estandar\n";
	for(y=1;y<6;y++)
	{
		cout<<"Dame un numero que no sea 0 (intento #"<<y<<")\n";
		cin>>x;
		if(x==0)
		 continue;
		cout<<"Por aqui solo pasa cuando el numero es diferente de 0\n";
		//y++;Para que se comporte como el do while
	}
	return 0;
}