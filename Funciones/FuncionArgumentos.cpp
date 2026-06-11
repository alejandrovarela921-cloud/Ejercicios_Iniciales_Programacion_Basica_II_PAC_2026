#include <iostream>
using namespace std;

//Declaracion de la funcion
void sumar(int a, int b) {
    cout <<"la suma de " << a << " y " << b << " es " << a + b << endl;
}

int main(int argc, char *argv[]) {
    
    int num1 = 5;
    int num2 = 7;

//Llamada a la funcion
    sumar(num1, num2);
        
    return 0;
}