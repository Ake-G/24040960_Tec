#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
int main()
{ 
    SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char c[12]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0'};
	int i=0;
	puts("Captura de una cadena");//cout<<"Dame una cadena: ";
	for(i=0;i<12;i++)
	{
	//printf("Dame el elemento No. %d\n ",i);
	cout<<"Dame el elemento No. "<<i<<":";
	fflush(stdin);
	c[i]=getchar();//cin>>c[i];
    }
    puts("Impresion de la cadena");
    //cout<<"Impresion de la cadena";
    for(i=0;i<12;i++)
    	c[i]=toupper(c[i]);
    	printf("%c",c[i]); //cout<<c[i];
    	system("pause");
    	system("cls");
	puts("\nConversion a minusculas"); //cout<<"Conversion a minusculas";
	for(i=0;i<12;i++)
	{
		c[i]=tolower(c[i]);
		//printf("%c",c[i]);
		cout<<c[i];
	}
	cout<<"\nArreglo completo: "<<c;
	return 0;
}