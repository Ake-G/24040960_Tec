#include<iostream>
#include<windows.h>
#include<time.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int matriz[10][10];
	int i,j,n;
	int suma1[10],suma2[10];
	srand(time(0));//inicia numeros aleatorios
		do{
		cout<<"Dime cuantos elementos por lado de la matriz? <2-10>: ";
		cin>>n;
	}while(n>10 or n<2);
	for(i=0;i<n;i++)//Ciclo para renglones
		{
		for(j=0;j<n;j++)//Ciclo para columnas
		{
			matriz[i][j]=rand()%10;//Genera numeros aleatorios del 0 al 99
		}
	}
		cout<<"Impresion de la matriz\n";
	for(i=0;i<n;i++)
	{
		suma1=0;
		for(j=0;j<n;j++)
		{
			suma1+=matriz[i][j];
			cout<<matriz[i][j]<<" ["<<suma1<<"]";
		}
	}
	return 0;
}