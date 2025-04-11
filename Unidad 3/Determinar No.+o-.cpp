#include <iostream>
#include <windows.h>
using namespace std;
int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int n;
	cout<<"Dame un numero para determinar si es positivo o negativo: \n";
	cin>>n;
	//usando ?
	n>0?cout<<"El numero es positivo\n":cout<<"El numero es negativo\n";
	system("pause");
	//Usando if 
	if (n>0)
	  cout<<"El numero es positivo\n";
	else
	  cout<<"El numero es negativo\n";  
	system("pause");
	if (n>0)
	  cout<<"El numero es positivo\n";
	else
	   if(n<0)
	   	cout<<"El numero es negativo\n"; 
	   	else
	   	cout<<"El numero es cero";
	return 0;
}