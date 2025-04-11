#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int uno,dos,tres,menor;
	char nombre[20];
	cout<<"INSTITUTO TECNOLOGICO DE DURANGO\n";
	cout<<"Fundamentos de Programacion\n";
	cout<<"Programa que determina cual es el mayor de 3 numeros\n";
	cout<<"Dime tu nombre: ";
    gets(nombre);
    cout<<"Dime el primer numero: "; 
	cin>>uno;
    cout<<"Dime el segundo numero: ";
	cin>>dos;
    cout<<"Dime el ptercer numero: "; 
	cin>>tres;
	if (uno<dos and uno<3)
    {
	menor=uno;
	}
	else
	{
		if (dos<uno and dos<tres)
		{
			menor=dos;
		}
		else
		{
			menor=tres;
		}
	}
	cout<<nombre<<" El mayor de los tres numeros es: "<<menor;
	return 0;
}