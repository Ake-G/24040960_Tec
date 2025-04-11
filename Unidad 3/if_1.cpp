#include <iostream>
#include <windows.h>
using namespace std;
int main ()
{
	// Uso de if
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int cal;
	cout<<"Dime una calificacion: ";
	cin>>cal;
	if(cal>70)
	 cout<<"Aprobatoria"<<endl;
    system("pause");
    system("cls");
    cout<<"Dime otra calificacion: ";
    cin>>cal;
    if(cal>70)
     cout<<"Suficiente\n";
    else
     cout<<"No es suficiente\n";
    system("pause");
    system("cls");
    // Lo Mismo con ?
    cout<<"Dime una calificacion: (Evaluando con ?) ";
    cin>>cal;
    cal>70?cout<<"Suficiente\n":cout<<"No suficiente\n";
    // if con mas de una instruccion
    cout<<"Dime una calificacion: ";
    cin>>cal;
    if (cal>=70)
    {
    	printf("La calificacion obtenida es: ");
    	cout<<"Suficiente\n";
	}
	else
	{
		printf("La calificacion obtenida es: ");
    	cout<<"No Suficiente\n";
	}
	return 0;
}