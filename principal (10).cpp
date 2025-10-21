#include <iostream>
using namespace std;

int main() {
    int n;

    // 1. Pedir al usuario que ingrese un número
    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    // 2. Validar que n sea positivo
    if (n < 0) {
        cout << "Error: El número debe ser positivo." << endl;
        return 1; // Salir del programa con error
    }

    // 3. Bucle externo para las filas
    for (int i = 1; i <= n; ++i) {
        // 4. Bucle interno para imprimir los números de 1 a i
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        // 5. Salto de línea al final de cada fila
        cout << endl;
    }

    return 0;
}








