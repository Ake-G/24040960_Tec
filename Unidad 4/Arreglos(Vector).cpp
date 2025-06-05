#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
int main()
{ 
    SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int vector[10];
	int i;
	for(i=0;i<10;i++)
	    vector[i]=i*2;
	for(i=0;i<=10;i++)//Se paso el limite
	    cout<<"vector["<<i<<"]="<<vector[i]<<"\n";
	vector[0]=100;
	vector[1]=200;
	vector[9]=300;
	system("pause");
	for(i=0;i<10;i++)
	    cout<<"vector["<<i<<"]="<<vector[i]<<"\n";
	cout<<vector[0]<<endl;
	cout<<vector[1]<<"\n";
	cout<<vector[9]<<"\n";
	system("pause");
	for(i=0;i<10;i++)
	{
		cout<<"Dame el valor del vector["<<i<<"]: ";
		cin>>vector[i];
	}
	system("pause");
	for(i=0;i<15;i++)//Se paso el limite
	    cout<<"vector["<<i<<"]="<<vector[i]<<"\n";
	return 0;
}