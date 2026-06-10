#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
    int inicial, final; 
    int diferencia = 0;

    // Solicitar valores inicial y final
    cout << "Ingrese el valor inicial: "; 
    cin >> inicial;
    cout << "Ingrese el valor final: "; 
    cin >> final;

    // Validar que sean datos diferentes
    while (inicial == final) {
        cout << "Los valores inicial y final deben ser diferentes." << endl; 
        cout << "Ingrese el valor inicial: "; 
        cin >> inicial;
        cout << "Ingrese el valor final: "; 
        cin >> final;
    }

    // Calcular la diferencia absoluta (sin importar si es ascendente o descendente)
    diferencia = abs(final - inicial);

    // Validar que la diferencia permita mostrar valores intermedios
    // Para que existan valores "entre" ellos, la diferencia debe ser estrictamente mayor a 1
    if (diferencia < 2) {
        cout << "No hay valores intermedios (la diferencia entre los numeros es 1 o menor)." << endl;
    } else {
        // Datos ascendentes
        if (inicial < final) {
            int i = inicial + 1; // Comenzamos desde el siguiente número
            do {
                cout << "Valor: " << i << endl; 
                i++;
            } while (i < final);
        } 
        // Datos descendentes
        else {
            int i = inicial - 1; // Comenzamos desde el número anterior
            do {
                cout << "Valor: " << i << endl; 
                i--;
            } while (i > final);
        }
    }

    return 0;
}
