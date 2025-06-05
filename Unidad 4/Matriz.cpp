#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main()
{ 
    SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int matriz[5][5];//Declara una matriz de 5 x 5
	int i,j;
	srand(time(0));//Inicilaliza la semilla de numeros aleatorios
	for(i=0;i<5;i++){//Ciclo para renglones
	   for(j=0;j<5;j++){//Ciclo para columnas
	     cout<<"Dame el valor del renglon "<<i<<" columna "<<j<<endl;
	     //cin>>matriz[i][j];
	     matriz[i][j]=rand()%100;//Genera numero aleatorios entre 0 y 99
         }
    }
    for(i=0;i<5;i++)
    {
    	for(j=0;j<5;j++)
    	 //printf("%3d",matriz[i][j]);
    	 cout<<matriz[i][j]<<" ";
    	 cout<<"\n";
	}
	return 0;
}