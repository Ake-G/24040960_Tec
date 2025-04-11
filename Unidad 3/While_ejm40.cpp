#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,c=0;
	float sueldo, total;
	char opcion,nombre[10];
	while(c!=0)// La condicion nunca se cumpla ¡Cuidado!
	{
		cout<<"Esto nunca se imprime";
		//C=0;
	}
	/*While se puede usar en situaciones en las que se sabe 
	de antemano el numero de vueltas que se habra de ejecutar, 
	y debe de constar de inicialiczacion, condicion y modificacion*/
	x=1;//Inicializacion
	while(x<11)//Condicion
	{
		cout<<x<<"\n";//Imprime una numeracion de 1 a 10
		x++;//variacion
	}
	system("pause"); 
	opcion='s';//Inicializacion
	while(opcion=='s' or opcion=='S')
	{
		system("cls");
		cout<<"Dame tu nombre: "; fflush(stdin); gets(nombre);
		cout<<"Dame tu sueldo: ";cin>>sueldo;
		total+=sueldo;//Es lo mismo que total=total+sueldo
		printf("Deseas capturar otro empleado <<s/n>>? ");
		cin>>opcion;//variacion
	}
	printf("Total de salarios= $%5.2f\n",total);
	cout<<"Despues de la pausa el programa se cicla\n";
	system("pause");
	//Cuidado con poner ; despues de un while
	x=0;
	while(x<10);// Se cicla
	{
		cout<<x<<"\n";
		x++;
	}
	return 0;
}