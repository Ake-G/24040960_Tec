#include <stdio.h>//gets y puts son cadenas y los lee, y el fflush es para limpiar el bufer de la entrada
//#include<stdio.h> //system
//#include <iostream> //cin,cout
#include <conio.h>//getch
//using namespace std;
int main()
{
	char cad[80];//decara un arreglo 80 posiciones char Llamado cad
    char c; //declara una variable de tipo char (solo para un caracter) 
	puts("dame una cadena");//imprime en pantalla la cadena argumento 
	gets(cad); //Lee por teclado la variable argumento 
	puts("Ejemplo de impresión con puts"); 
	puts(cad); //imprime en pantalla la variable argumento 
	printf("ejemplo de impresion con printf: "); //imprime La cadena argupada 
	printf(cad); //imprime en pantalla la variable argumento 
	printf("\npresiona una tecla y continua automaticamente: "); //imprime un salto de linea y la cadena argumento 
	c=getche(); //lee por teclado un caracter y lo almacena en la var C 
	puts("\n");//imprime la cadena argumento, en este caso, un salto 
	putchar(c); //imprime la variable de tipo char c mediante enter
	puts("\n");//imprime la cadena argumento, en este caso, un salto 22 
	printf("presiona una tecla y luego enter: ");  
	c=getchar();// Lee un caracter y lo almacena en c mediante enter 24 
	putchar(c); 
	printf("\nPresiona una tecla y continua automaticamente: ");
	fflush(stdin); //vacia el buffer de entrada 27 
	c=getch(); //lee un caracter sin que aparezca 28 
	printf("In"); 
	putchar(c);
	return 0;
}