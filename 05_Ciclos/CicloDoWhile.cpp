#include <iostream>

using namespace std;

// Realizar un programa que muestre los números del 1 al 10

int main() {

    int contador = 0; // Variable para contar los números
    do { // El ciclo do-while se ejecuta al menos una vez, incluso si la condición es falsa
        contador = contador + 1; // Incrementar el contador en 1
        cout << "contador: " << contador << endl; // Mostrar el número actual
    } while (contador < 10); // Condición para continuar el ciclo mientras el contador sea menor que 10
    return 0;
}
