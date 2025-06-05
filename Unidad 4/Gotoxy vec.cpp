#include <iostream>//Programa que imprime un marco y en su interior un vector
#include <time.h>
#include <windows.h>
#include <conio.h>//Para usar getche()
using namespace std;
void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
	int r,vec[10];
	srand(time(0));//Inicializa la semilla de numeros aleatorios 
	printf("Maximice la pantalla y presione una tecla");
	getche();
	system("cls");
	for(r=0;r<=140;r++)//165 ciclo para dibujar las lineas horizontales
	{
		gotoxy(r,0);//linea superior
		printf("*");
		gotoxy(r,35);//40 linea inferior 
		printf("*");
	}
	for(r=0;r<35;r++)//40 ciclo para las lineas verticales
	{
		gotoxy(0,r);//linea izquierda
		printf("*");
		gotoxy(140,r);//165 linea derecha 
		printf("*");
	}
	gotoxy(40,2);//72,17
	cout<<"Impresion del vector";
	for(r=0;r<10;r++)
	{
		vec[r]=rand()%100;
		gotoxy(50,r+3);//80,r+17
		printf("%d ",vec[r]);//cout<<"vec[r]";
	}
	gotoxy(5,13);//40,13
	getche();
	return 0;
}
