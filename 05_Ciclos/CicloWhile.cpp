#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

//Realizar un programa que muestre los números del 1 al 10 utilizando un ciclo while.
int main() {

    int contador = 0; // Variable para contar los números
    while (contador <= 10) { // Condición para continuar el ciclo mientras el contador sea menor que 10
        contador = contador + 1; // Incrementar el contador en 1
        cout << "contador: " << contador << endl; // Mostrar el número actual
    }
    return 0;
}