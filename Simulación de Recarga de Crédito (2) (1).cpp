#include <iostream>
using namespace std;

int main() {
    double saldo = 0, recarga;
    char continuar = 'S';

    while (continuar == 'S' || continuar == 's') {
        // 1. Pedir monto de recarga
        cout << "Ingresa el monto de recarga: ";
        cin >> recarga;

        // 2. Actualizar saldo
        saldo += recarga;
        cout << "Saldo actual: " << saldo << endl;

        // 3. Preguntar si desea continuar
        cout << "¿Deseas hacer otra recarga? (S/N): ";
        cin >> continuar;
    }

    cout << "Proceso terminado. Saldo final: " << saldo << endl;
    return 0;
}



