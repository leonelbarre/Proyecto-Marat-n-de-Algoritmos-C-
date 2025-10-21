#include <iostream>
using namespace std;

// Función recursiva que calcula la suma de los dígitos
int sumaDigitos(int n) {
    if (n < 10)
        return n; // Caso base: un solo dígito
    else
        return (n % 10) + sumaDigitos(n / 10);
}

int main() {
    int n;

    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "Error: el número debe ser positivo." << endl;
        return 1;
    }

    int resultado = sumaDigitos(n);

    cout << "La suma de los dígitos del número " << n << " es: " << resultado << endl;

    return 0;
}