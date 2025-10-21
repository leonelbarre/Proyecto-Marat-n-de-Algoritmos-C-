#include <iostream>
using namespace std;

// Función para determinar si un número es primo
bool esPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int main() {
    int n;
    // Entrada de datos
    cout << "Ingrese un número entero positivo: ";
    cin >> n;
    if (n < 0) {
        cout << "Error: El número debe ser positivo." << endl;
        return 1;
    }
    // Mostrar los números primos hasta n
    cout << "Números primos hasta " << n << ": ";

    for (int i = 2; i <= n; i++) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}









