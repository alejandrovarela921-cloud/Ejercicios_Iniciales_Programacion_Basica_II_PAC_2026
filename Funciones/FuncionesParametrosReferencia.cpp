#include <iostream>

using namespace std;

void intercambiar(int &a, int &b) {
    int temp = a; // Guarda el valor de a en una variable temporal
    a = b;        // Asigna el valor de b a a
    b = temp;     // Asigna el valor temporal (original de a) a b
}

int main() {
    int x = 5;
    int y = 10;

    cout << "Antes de intercambiar: x = " << x << ", y = " << y << endl;

    intercambiar(x, y); // Llama a la función para intercambiar los valores de x y y

    cout << "Despues de intercambiar: x = " << x << ", y = " << y << endl; // Los valores de x e y se han intercambiado
    return 0;
}