#include <iostream> 
#include <windows.h> 
 using namespace std; 
void captura(char arreglo[]);
void iguales(char arreglo1[], char arreglo2[]);

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    char cad1[100], cad2[100]; 

    cout << "Dame la primera cadena: "; 
    captura(cad1);
    cout << "Dame la segunda cadena: "; 
    captura(cad2); 

    iguales(cad1, cad2);

    return 0; 
}


void captura(char arreglo[])
{
    gets(arreglo);
}


void iguales(char arreglo1[], char arreglo2[])
{
    int diferentes = 0; 
    for (int i = 0; arreglo1[i] != '\0' || arreglo2[i] != '\0'; i++)
    {
        if (arreglo1[i] != arreglo2[i]) 
        {
            diferentes = 1;
            break; 
        }
    }

    if (diferentes == 1) 
    {
        cout << "Las cadenas son diferentes" << endl;
    }
    else 
    {
        cout << "Las cadenas son iguales" << endl; 
		}
}