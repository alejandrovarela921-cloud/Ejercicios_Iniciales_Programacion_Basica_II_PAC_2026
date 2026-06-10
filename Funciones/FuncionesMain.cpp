#include <iostream>

using namespace std;

void multiplicaPorDos(int numero) {
    numero *= 2; //Multiplica el número por 2, pero no afecta al valor original fuera de la función
    cout << "Dentro de la funcion, el numero multiplicado por 2 es: " << numero << endl;
}

int main(int argc, char* argv[]) {
    int valor = 5;
    cout << "Antes de llamar a la funcion: " << valor << endl;

    multiplicaPorDos(valor); // Llama a la función para multiplicar el número por 2

    cout << "Numero después de llamar a la funcion: " << valor << endl; // El número original sigue siendo 5
    return 0;
}