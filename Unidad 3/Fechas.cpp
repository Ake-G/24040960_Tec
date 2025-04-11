#include <iostream>
#include <windows.h>
using namespace std;
int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	string mes;
	int d,m,a;
	cout<<"Dame una fecha en este formato: ddmmaaaa";
	scanf("%2d%2d%4d",&d,&m,&a);
	if (m==1)
	  mes="enero";
	if (m==2)
	  mes="febrero";
	if (m==3)
	  mes="marzo";
	if (m==4)
	  mes="abril";
	if (m==5)
	  mes="mayo";
	if (m==6)
	  mes="junio";
	if (m==7)
	  mes="julio";
	if (m==8)
	  mes="agosto";
	if (m==9)
	  mes="septiembre";
	if (m==10)
	  mes="octubre";
	if (m==11)
	  mes="noviembre";
	if (m==12)
	  mes="diciembre";
	cout<<"La fecha es: "<<d<<"-"<<mes<<"-"<<a;

	return 0;
}

  
	  