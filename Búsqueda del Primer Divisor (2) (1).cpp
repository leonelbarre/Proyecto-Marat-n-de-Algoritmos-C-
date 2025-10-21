#include <iostream>
using namespace std;

int main() {
    int num;

    // 1. Pedir número
    cout << "Ingresa un número mayor que 1: ";
    cin >> num;

    if (num <= 1) {
        cout << "Número inválido. Debe ser mayor que 1." << endl;
        return 1;
    }

    // 2. Buscar primer divisor
    bool encontrado = false;
    for (int i = 2; i <= num; ++i) {
        if (num % i == 0) {
            cout << "El primer divisor distinto de 1 es: " << i << endl;
            encontrado = true;
            break;
        }
    }

    // 3. Si no se encuentra (número primo)
    if (!encontrado)
        cout << "El número es primo." << endl;

    return 0;
}



