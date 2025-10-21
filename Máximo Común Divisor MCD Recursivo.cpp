#include <iostream>
using namespace std;

// Función recursiva para calcular el MCD usando el algoritmo de Euclides
int mcd(int a, int b) {
    if (b == 0) // Caso base
        return a;
    else
        return mcd(b, a % b); // Paso recursivo
}

int main() {
    int a, b;

    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;

    if (a <= 0 || b <= 0) {
        cout << "Error: ambos números deben ser positivos." << endl;
        return 1;
    }

    cout << "El MCD de " << a << " y " << b << " es: " << mcd(a, b) << endl;

    return 0;
}