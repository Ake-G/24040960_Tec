#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	cout<<"Hola, esta es una prueba de la funcion gotoxy."<<endl;
	gotoxy(1,1);// Mueve el cursor en la columna 1, renglon 1
	cout<<"Este letrero comienza en la posicion (1,1).";
	gotoxy(30,2);// Mueve el cursor en la columna 30, renglon 2
	cout<<"Este letrero comienza en la posicion (30,2).";
	gotoxy(1,20);// Mueve el cursor en la columna 1, renglon 20
	cout<<"Este letrero comienza en la posicion (1,20).";
	system("pause");
	system("cls");
	cout<<"                 Impresion en las 4 esquinas";
	gotoxy(0,0);
	cout<<"*";
	gotoxy(80,0);
	cout<<"*";
	gotoxy(0,19);
	cout<<"*";
	gotoxy(80,19);
	cout<<"*";
	return 0;
}