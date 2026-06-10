#include <iostream>

int main() {
    int numero = 5;

    // If / else DESICION SIMPLE
    if (numero > 0) {
        std::cout << "El numero es positivo\n";
    } else if (numero < 0) {
        std::cout << "El numero es negativo\n";
    } else {
        std::cout << "El numero es cero\n";
    }

    // Switch DECISION MULTIPLE
    switch (numero) {
        case 1:
            std::cout << "Numero es 1\n";
            break;
        case 5:
            std::cout << "Numero es 5\n";
            break;
        default:
            std::cout << "Numero no es 1 ni 5\n";
            break;
    }

    // For DECISION ITERATIVA
    for (int i = 0; i < 3; ++i) {
        std::cout << "For: " << i << '\n';
    }

    // While DECISION ITERATIVA
    int contador = 3;
    while (contador > 0) {
        std::cout << "While: " << contador << '\n';
        contador--;
    }

    // Do-while DECISION ITERATIVA
    int otro = 0;
    do {
        std::cout << "Do-while: " << otro << '\n';
        otro++;
    } while (otro < 2);

    // Operador ternario
    std::cout << ((numero % 2 == 0) ? "Par\n" : "Impar\n");

    return 0;
}
