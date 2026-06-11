#include <iostream>
using namespace std;

//Funcion que imprime los numeros del 1 al 5
void imprimirNumeros() {
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl; // Imprime una nueva línea después de imprimir los números
}

int main(int argc, char* argv[]) {
    cout << "Los numeros del 1 al 5 son: ";
    imprimirNumeros(); // Llama a la función para imprimir los números
    return 0;
}