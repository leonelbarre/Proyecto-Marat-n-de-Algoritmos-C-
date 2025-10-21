#include <iostream>
using namespace std;

// Función recursiva para calcular la potencia de un número
int potencia(int base, int exponente) {
    if (exponente == 0) // Caso base
        return 1;
    else
        return base * potencia(base, exponente - 1); // Paso recursivo
}

int main() {
    int base, exponente;

    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    int resultado = potencia(base, exponente);
    cout << base << "^" << exponente << " = " << resultado << endl;

    return 0;
}