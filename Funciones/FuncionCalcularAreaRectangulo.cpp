#include <iostream>
using namespace std;

int calcularAreaRectangulo(int base, int altura) {
    return base * altura;
}

int main() {
    int base, altura;

    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    int area = calcularAreaRectangulo(base, altura);
    cout << "El area del rectangulo es: " << area << endl;

    return 0;
}
