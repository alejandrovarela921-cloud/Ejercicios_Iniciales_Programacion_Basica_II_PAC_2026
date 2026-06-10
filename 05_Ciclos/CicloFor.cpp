#include <iostream>

using namespace std;
int inicio = 0;
int fin = 0;

int main() {
    cout << "Ingrese el valor de inicio:" << endl;
    cin >> inicio;
    cout << "Ingrese el valor de fin:" << endl;
    cin >> fin;

    for (int i = inicio; i < fin; i=i+2) {
        cout << "Valor de i: " << i << endl;
    }
    return 0;
}
