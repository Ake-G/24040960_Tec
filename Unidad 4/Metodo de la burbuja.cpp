#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main()
{ 
    SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int vector[10];
	int i,j,n,tempo;
	srand(time(0));//Inicilaliza la semilla de numeros aleatorios
	do{
		cout<<"Dime cuantos elementos quieres ordenar? <2-10>: ";
		cin>>n;
	}while(n>10 or n<2);
	for(i=0;i<n;i++)//ciclo para llenar el vector
	{
		vector[i]=rand()%10;//Genera numeros aleatorios entre 0 y 9
		cout<<"Vector["<<i<<"]="<<vector[i]<<endl;
	}
	for(i=0;i<n;i++)
	{
	  for(j=i+1;j<n;j++)
	  {
	  	if(vector[i]>vector[j])
	  	{
	  		tempo=vector[j];
	  		vector[j]=vector[i];
	  		vector[i]=tempo;
		}
	  }
	}
	cout<<"Vector ordenado\n";
	for(i=0;i<n;i++)
	 cout<<"Vector["<<i<<"]="<<vector[i]<<endl;
	return 0;
}