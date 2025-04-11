#include <iostream>
#include <windows.h>
using namespace std;
int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int n;
	cout<<"Dame un numero para determinar si es par o impar: \n";
	cin>>n;
	if(n%2)//el resultado es cero y en C, cero=falso
	 cout<<"El numero es impar\n";
	else
	 cout<<"El numero es par\n";
	system("pause");
	//Condicion en forma explicita
	if(n%2==0)  
	 cout<<"El numero es par\n";
	else
	 cout<<"El numero es impar\n"; 
	return 0;
}