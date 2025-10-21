#include <iostream>
using namespace std;

int main() {
    const int PIN_CORRECTO = 1234;
    int pinIngresado;
    int intentos = 0;

    while (intentos < 3) {
        cout << "Ingresa tu PIN de 4 cifras: ";
        cin >> pinIngresado;

        if (pinIngresado == PIN_CORRECTO) {
            cout << "Acceso concedido." << endl;
            break;
        } else {
            intentos++;
            cout << "PIN incorrecto. Intento " << intentos << " de 3." << endl;
        }
    }

    if (intentos == 3)
        cout << "Acceso bloqueado por exceder los intentos." << endl;

    return 0;
}


