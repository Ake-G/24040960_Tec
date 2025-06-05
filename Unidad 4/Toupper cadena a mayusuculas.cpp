#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
int main()
{ 
    SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char cadena[15];
	int len, i;
	cout<<"Dame una palabra en minusculas: ";
	gets(cadena);
		len=strlen(cadena);//Obtiene la longitud de la cadena
	for(i=0;i<len;i++)
	   cadena[i]=toupper(cadena[i]);//Convierte a mayusuculas cada elemento
	cout<<"Impresion de la cadena completa: "<<cadena<<"\n";
	cout<<"Impresion elemento por elemento\n";
	for(int i=0;i<len;i++)
	   cout<<"cadena["<<i<<"]="<<cadena[i]<<"\n";
	return 0;
}