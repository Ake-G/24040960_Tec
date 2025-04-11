#include <iostream>
#include <windows.h>
using namespace std;
int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float numerador,denominador;
	cout<<"Dame el numerador (Dividendo): ";
	cin>>numerador;
	cout<<"Dame el denominador (Divisor): ";
	cin>>denominador;
	if(denominador)//Si denominador es !0 entonces es cierto
	 cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	else
	 cout<<"La division entre cero no se permite\n";
	system("pause");
	//Preguntando si es cero de manera explicita  
	if(denominador!=0)//Si denominador es !0 entonces es cierto
	 cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	else
	 cout<<"La division entre cero no se permite\n";
	system("pause");
	//Preguntando por la negacion de un valor diferente de cero
	if(!denominador)
	 cout<<"La division entre cero no se permite\n";
	else
	 cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	system("pause");
	return 0;
}