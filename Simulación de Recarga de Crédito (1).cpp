#include <iostream>
using namespace std;

int main() {
    double saldo, recarga;
    char continuar;

    // 1. Pedir saldo inicial
    cout << "Ingresa el saldo inicial: ";
    cin >> saldo;

    do {
        // 2. Pedir monto de recarga
        cout << "Ingresa el monto a recargar: ";
        cin >> recarga;
        saldo += recarga;

        // 3. Mostrar saldo actualizado
        cout << "Saldo actualizado: " << saldo << endl;

        // 4. Preguntar si desea continuar
        cout << "¿Deseas hacer otra recarga? (S/N): ";
        cin >> continuar;

    } while (continuar == 'S' || continuar == 's');

    cout << "Proceso finalizado. Saldo final: " << saldo << endl;

    return 0;
}
