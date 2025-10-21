#include <iostream>
using namespace std;

// Función recursiva para determinar si un número es par
bool esPar(int n) {
    if (n == 0) // Caso base: número par
        return true;
    else if (n == 1) // Caso base: número impar
        return false;
    else
        return esPar(n - 2); // Llamada recursiva
}

int main() {
    int n;

    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "Error: el número debe ser positivo." << endl;
        return 1;
    }

    if (esPar(n))
        cout << n << " es un número par." << endl;
    else
        cout << n << " es un número impar." << endl;

    return 0;
}