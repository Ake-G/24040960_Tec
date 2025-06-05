#include<iostream>
#include<windows.h>
#include<time.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int matriz[10][10], diags[2][10];//Declara dos matrices
	int i,j,n;
	srand(time(0));//inicia numeros aleatorios
		do{
		cout<<"Dime cuantos elementos por lado de la matriz? <2-10>: ";
		cin>>n;
	}while(n>10 or n<2);
		for(i=0;i<n;i++)//Ciclo para renglones
		{
		for(j=0;j<n;j++)//Ciclo para columnas
		{
			matriz[i][j]=rand()%100;//Genera numeros aleatorios del 0 al 99
		}
	}
	cout<<"Impresion de la matriz\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%3d",matriz[i][j]);
			cout<<"\n";
	}
	cout<<"Obtencion de Diagonal Normal\n";
	for(i=0;i<n;i++)
	{
		diags[0][i]=matriz[i][i];
		printf("%3d",diags[0][i]);
	}
	cout<<"\nObtencion de Diagonal Inversa\n";
	j=0;
	/*for(i=n-1;i>=0;i--)
	{
		diags[1][j]=matriz[j][i];
		printf("%3d",diags[1][j]);
		j++;
	}*/
	j=n-1;
	for(i=0;i<n;i++)
	{
 	    diags[1][i]=matriz[i][j];
		printf("%3d",diags[1][i]);
		j--;	
	}
	return 0;
}