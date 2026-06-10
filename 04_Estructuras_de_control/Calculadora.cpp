#include <iostream> // Librería para entrada y salida de datos
#include <string>   // Librería para usar el tipo de dato string
#include <conio.h>    // Librería para funciones de consola, como getch() 
#include <stdlib.h>   // Librería para funciones de utilidad, como exit()
using namespace std; // Usar el espacio de nombres estándar para evitar escribir "std::" antes de cada uso

int main() { 
    int opcion;
    double num1, num2, resultado; // Variables para almacenar los números y el resultado de la operación

    do {

        cout << "CALCULADORA BASICA DE MARCOS" << endl; // Mostrar el título de la calculadora
        cout << "1. Suma" << endl; // Opción para suma
        cout << "2. Resta" << endl; // Opción para resta
        cout << "3. Multiplicacion" << endl; // Opción para multiplicación
        cout << "4. Division" << endl; // Opción para división
        cout << "5. Salir" << endl; // Opción para salir del programa
        cout << "Seleccione una opcion: "; // Solicitar al usuario que seleccione una opción
        cin >> opcion; // Leer la opción seleccionada por el usuario

        switch (opcion) {
            case 1: //SUMA
            cout << "Bienvenido a la suma de valores" << endl; // Mensaje de bienvenida para la suma

            /*validar el ingreso de numeros mayores o iguales a 50*/
            cout << "Ingrese el primer numero (mayor o igual a 50): "; // Solicitar al usuario que ingrese el primer número
            cin >> num1; // Leer el primer número
            while (num1 < 50) { // Validar que el primer número sea mayor o igual a 50
                cout << "El numero debe ser mayor o igual a 50." << endl; // Mostrar mensaje de error si el número es menor a 50
                 cout << "Ingrese el primer numero (mayor o igual a 50): "; // Solicitar al usuario que ingrese el primer número
                cin >> num1; // Leer el primer número nuevamente
            }
            cout <<""<< endl; // Imprimir una línea en blanco para mejorar la legibilidad
            cout <<""<< endl; // Imprimir una línea en blanco para mejorar la legibilidad
            cout << "Ingrese el segundo numero (mayor o igual a 50): "; // Solicitar al usuario que ingrese el segundo número
            cin >> num2; // Leer el segundo número
            while (num2 < 50) { // Validar que el segundo número sea mayor o igual a 50
                cout << "El numero debe ser mayor o igual a 50." << endl; // Mostrar mensaje de error si el número es menor a 50
                 cout << "Ingrese el segundo numero (mayor o igual a 50): "; // Solicitar al usuario que ingrese el segundo número
                cin >> num2; // Leer el segundo número nuevamente
            }
            resultado = num1 + num2; // Calcular la suma de los dos números
            cout << "El resultado de la suma es: " << resultado << endl; // Mostrar el resultado de la suma
            break; // Salir del switch después de realizar la suma

            case 2: //RESTA
            cout << "Bienvenido a la resta de valores" << endl; // Mensaje de bienvenida para la resta
            cout << "Ingrese el primer numero: "; // Solicitar al usuario que ingrese el primer número
            cin >> num1; // Leer el primer número
            cout << "Ingrese el segundo numero: "; // Solicitar al usuario que ingrese el segundo número
            cin >> num2; // Leer el segundo número

            while (num1 < num2) { // Validar que el primer número sea mayor o igual al segundo número para evitar resultados negativos
                cout << "El primer numero debe ser mayor o igual al segundo numero." << endl; // Mostrar mensaje de error si el primer número es menor que el segundo número
                cout << "Ingrese el primer numero: "; // Solicitar al usuario que ingrese el primer número nuevamente
                cin >> num1; // Leer el primer número nuevamente
                cout << "Ingrese el segundo numero: "; // Solicitar al usuario que ingrese el segundo número nuevamente
                cin >> num2; // Leer el segundo número nuevamente
            }
            resultado = num1 - num2; // Calcular la resta de los dos números
            cout << "El resultado de la resta es: " << resultado << endl; // Mostrar el resultado de la resta
            break; // Salir del switch después de realizar la resta

            case 3: //MULTIPLICACION
            cout << "Bienvenido a la multiplicacion de valores" << endl; // Mensaje de bienvenida para la multiplicación
            cout << "Ingrese el primer numero: "; // Solicitar al usuario que ingrese el primer número
            cin >> num1; // Leer el primer número
            cout << "Ingrese el segundo numero: "; // Solicitar al usuario que ingrese el segundo número
            cin >> num2; // Leer el segundo número
            resultado = num1 * num2; // Calcular la multiplicación de los dos números
            cout << "El resultado de la multiplicacion es: " << resultado << endl; // Mostrar el resultado de la multiplicación
            
            if (resultado >=0 && resultado <= 100) {
                cout << "Grupo A" << endl; // Mostrar que el resultado pertenece al Grupo A si está entre 0 y 100
            } else if (resultado > 100 && resultado <= 500) {
                cout << "Grupo B" << endl; // Mostrar que el resultado pertenece al Grupo B si está entre 101 y 500
            } else if (resultado > 500) {
                cout << "Grupo C" << endl; // Mostrar que el resultado pertenece al Grupo C si es mayor a 500
            }
            break; // Salir del switch después de realizar la multiplicación

            case 4: //DIVISION
            cout << "Bienvenido a la division de valores" << endl; // Mensaje de bienvenida para la división
            cout << "Ingrese el primer numero: "; // Solicitar al usuario que ingrese el primer número
            cin >> num1; // Leer el primer número
            cout << "Ingrese el segundo numero: "; // Solicitar al usuario que ingrese el segundo número
            cin >> num2; // Leer el segundo número

            if (num2 !=0) {
                resultado = num1 / num2; // Calcular la división de los dos números
                cout << "El resultado de la division es: " << resultado << endl; // Mostrar el resultado de la división
            } else {
                cout << "Error: No se puede dividir por cero." << endl; // Mostrar mensaje de error si el segundo número es cero
                break; // Salir del switch después de mostrar el error
            }
                case 5: //SALIR
                cout << "Gracias por usar la calculadora. ¡Hasta luego!" << endl; // Mensaje de despedida al salir del programa
                break; // Salir del switch después de mostrar el mensaje de despedida

                default: // Opción por defecto para manejar entradas no válidas
                cout << "Opcion no valida. Por favor, seleccione una opcion del 1 al 5." << endl; // Mostrar mensaje de error si la opción seleccionada no es válida



            

        }

    }while (opcion != 5);

    return 0;

}