#include <iostream>
#include <windows.h>
using namespace std;
int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	cout<< "Hola esta es una prueba de limpieza de pantalla."<< endl;
	system("pause");
	system("cls");// Limpia la Pantalla
	system("pause");
	cout<<"La pantalla se ha limpiado."<<endl;
	return 0;
}