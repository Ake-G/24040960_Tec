#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,primo;
	do{
		cout<<"Dame un numero para saber si es primo(mayor que 1): \n";
		cin>>x;
		x=!1;
		primo=x/2;
		if(x=1)
	{
		cout<<"El numero es primo\n";
	}
		 else
		 {
		 cout<<"El numero no es primo\n";
		 }
	}while(x=1);
	return 0;
}