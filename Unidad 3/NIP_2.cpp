#include <iostream>
#include <windows.h>
using namespace std;
// Programa de validacion de NIP
int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int nip=123;//int nip; nip=123
	int intento=0;
	cout<<"Teclea tu NIP: ";
	cin>>intento;
	if(intento==nip)
	{
		cout<<("**Correcto**\n");
		cout<<"Tu NIP es: "<<intento;
	}
	else
	{
		cout<<"**Incorrecto**\n";
		if(intento>nip)
		 {
		 	cout<<"Demasiado alto";
		 }
		 else
		 {
		 	cout<<"Demasiado bajo";
		 }
	}
	return 0;
	}