#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,cuantos,suma;
	float promedio;
	suma=0;
	cuantos=0;
	for(x=1;x!=-1;)
	{
		cout<<"Dame un numero, -1 para terminar el ciclo; \n";
		cin>>x;
		cuantos++;
		suma=suma+x;
	}
	suma++;
	cuantos=cuantos-1;
	promedio=suma/cuantos;
	cout<<"Fueron "<<cuantos<<" numeros\n";
	cout<<"La sumatoria es= "<<suma<<"\n";
	cout<<"El promedio es= "<<promedio<<"\n";
	return 0;
}