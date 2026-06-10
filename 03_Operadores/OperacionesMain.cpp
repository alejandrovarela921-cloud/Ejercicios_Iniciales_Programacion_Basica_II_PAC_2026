#include <iostream>

int main() { 
    int a, b;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> a;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> b;
    int suma = a + b;
    std::cout << "La suma es: " << suma << std::endl;
    return 0;
}


// "ESTO ES TEXTO AGREGADO"
// Operadores logicos en C++:
// && (AND lógico): Devuelve true si ambos operandos son verdaderos.
// || (OR lógico): Devuelve true si al menos uno de los operandos es verdadero.
// ! (NOT lógico): Devuelve true si el operando es falso, y viceversa.
// == (Igualdad): Devuelve true si ambos operandos son iguales.
// != (Desigualdad): Devuelve true si ambos operandos son diferentes.
// = (Asignación): Asigna el valor del operando derecho al operando izquierdo.
// === (Comparación estricta): No existe en C++, pero se puede simular usando == para comparar valores y tipos.

// "Operaciones Artimeticas en C++:"
// + (Suma): Suma dos operandos.
// - (Resta): Resta el segundo operando del primero.
// * (Multiplicación): Multiplica dos operandos.
// / (División): Divide el primer operando por el segundo. Si ambos operandos son enteros, el resultado también será un entero (división entera).
// % (Módulo): Devuelve el resto de la división del primer operando por el segundo. Solo se puede usar con operandos enteros.

// "OPERACDORES RELACIONALES EN C++:"
// < (Menor que): Devuelve true si el primer operando es menor que el segundo.
// > (Mayor que): Devuelve true si el primer operando es mayor que el segundo.
// <= (Menor o igual que): Devuelve true si el primer operando es menor o igual que el segundo.
// >= (Mayor o igual que): Devuelve true si el primer operando es mayor o igual que el segundo.