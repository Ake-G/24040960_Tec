#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,y;
	float z;
	//Imprime numeros de 1 en 1 hasta 100 mientras x<=100,
	//variacion: incrementos de 1 en 1 y de 2 en 2
	/*for(x=1;x<11;x++)
	{
		cout<<x<<", ";
	}
	cout<<"\n";
	system("pause");
	for(x=100;x!=65;x-=5)//x=x-5
	{
		z=sqrt(x);
		cout<<"La raiz cuadrada de "<<x<<" es "<<z<<"\n";
	}
	system("pause");
	x=10;
	for(y=10;y!=x;++y)
	{
		cout<<y<<" Dentro del ciclo (nunca entra)\n";
	}
	cout<<y<<" Fuera de ciclo\n";
	system("pause");
	for(x=0,y=0;x+y<10;++x)
	{
		cout<<"Dame el valor de y: ";
		cin>>y;
		cout<<x<<"+"<<y<<"="<<x+y<<" El ciclo continua mientras la suma sea <10\n";
	}
	cout<<x<<"+"<<y<<"="<<x+y<<" Fuera del ciclo\n";
	//El for puede no tener todas sus partes
	for(x=0;x!=123;)
	{
		cout<<"Dame el valor de x, 123 para terminar el ciclo: ";
		cin>>x;
	}
	system("pause");
	//Inicializacion antes del for
	x=1;
	for(;x<=10;)
	{
		printf("%d\n",x);
		++x;//Variacion fuera de la sentencia for pero dentro del cuerpo del ciclo
	}
	system("pause");
	for(;;)//Ciclo infinito
	 printf("Nunca termina\n");
	system("pause");*/
	//Bucles for sin cuerpo (retardadores)
	cout<<"Hola mundo\n";
	for(x=0;x<1999900000;x++);//El ";" hace que el ciclo termine aqui
	 cout<<"Hola mundo despues de unos cuantos instantes\n";//No es parte del ciclo
	system("pause"); 
	return 0;
}