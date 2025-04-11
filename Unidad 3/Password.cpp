#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x=1;
	string clave;//parecido a char [100]
	for(x=1;x<4;x++)
	{
		printf("Dame tu pasword sin espacios en blanco (intento #%d)",x);
		//getline(cin,clave)
		cin>>clave;
		if(clave=="soloyolose")
		break;
	}
	if(x==4)
	 puts("\ausuario no autorizado");
	else 
	 printf("Bienvenido al intento #%d",x);
	return 0;
}
 