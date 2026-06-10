#include <iostream> // Libreria para entrada y salida de datos
#include <math.h> // Libreria para funciones matematicas
#include <stdio.h> // Libreria para funciones de entrada y salida de datos
#include <stdlib.h> // Libreria para funciones de utilidad general
#include <string> // Libreria para manejo de cadenas de texto

using namespace std;

string nombreEstudiante;
string apellidoEstudiante;

int main() {
    cout<<"Ingrese su nombre: "; // Salida de texto
    cin>>nombreEstudiante; // Entrada de valores
    cout<<"Ingrese su apellido: "; // Salida de texto
    cin>>apellidoEstudiante; // Entrada de valores
    cout<<"Hola "<<nombreEstudiante<<" "<<apellidoEstudiante<<"!"<<endl; // Salida de valores

    printf ("Esta es la clase de programacion basica"); // Salida de texto utilizando la funcion printf

    cout<<" " <<endl; // Salto de linea
    rand(); // Funcion para generar un numero aleatorio

    //System("pause"); // Funcion para pausar la ejecucion del programa
    

    return 0;

}
