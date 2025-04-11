#include <iostream>
#include <windows.h>
using namespace std;
int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char c;
	int opcion;
	cout<<"Dame un valor binario 0/1: ";
	cin>>c;
	switch(c)
	{
		case '0':
		 cout<<"Falso o apagado\n";
			break;
		case '1':
		 cout<<"Cierto o encendido\n";
		 break;
		default:
		 cout<<"Tecleaste un valor incorrecto\n";
	}
	system("pause");
	system("cls");
	printf("1.-QUIMICA\n");//cout<<"1.-Quimica\n"
	cout<<"2.-FISICA\n";
	printf("3.-MATEMATICAS\n");
	printf("4.-RECREO\n");
	printf("Selecciona una opcion: ");
	cin>>opcion;
	switch(opcion)
	{
		case 1:printf("Seleccionaste QUIMICA");
		 break;
		case 2:printf("Seleccionaste FISICA");
		 break;
		case 3:printf("Seleccionaste MATEMATICAS");
		 break;
		case 4:printf("Seleccionaste RECREO");
		 break;   
		default:
		printf("\aSeleccionaste una opcion no valida") ;
	}
	return 0;
}