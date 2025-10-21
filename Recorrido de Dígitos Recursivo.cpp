#include <iostream>
using namespace std;

// Función recursiva para recorrer e imprimir los dígitos de un número
void recorrerDigitos(int n) {
    if (n < 10) { // Caso base
        cout << n << " ";
    } else {
        recorrerDigitos(n / 10); // Llamada recursiva para eliminar el último dígito
        cout << n % 10 << " ";   // Imprime el último dígito después de la recursión
    }
}

int main() {
    int numero;

    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Error: debe ingresar un número positivo." << endl;
        return 1;
    }

    cout << "Los dígitos del número son: ";
    recorrerDigitos(numero);
    cout << endl;

    return 0;
}