#include <iostream>
using namespace std;

int main() {
    double saldo = 1000.0; // Saldo inicial
    int opcion;
    double monto;

    do {
        cout << "\n--- CAJERO AUTOMATICO ---\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Depositar dinero\n";
        cout << "3. Retirar dinero\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Su saldo actual es: $" << saldo << endl;
                break;

            case 2:
                cout << "Ingrese el monto a depositar: $";
                cin >> monto;
                if (monto > 0) {
                    saldo += monto;
                    cout << "Deposito exitoso. Nuevo saldo: $" << saldo << endl;
                } else {
                    cout << "Monto invalido." << endl;
                }
                break;

            case 3:
                cout << "Ingrese el monto a retirar: $";
                cin >> monto;
                if (monto <= saldo && monto > 0) {
                    saldo -= monto;
                    cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
                } else if (monto > saldo) {
                    cout << "Saldo insuficiente." << endl;
                } else {
                    cout << "Monto invalido." << endl;
                }
                break;

            case 4:
                cout << "Gracias por usar el cajero. ¡Hasta pronto!" << endl;
                break;

            default:
                cout << "Opcion no valida. Intente nuevamente." << endl;
        }

    } while (opcion != 4);

    return 0;
}







