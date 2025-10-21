#include <iostream>
using namespace std;

int main() {
    const int PIN_CORRECTO = 1234;
    int pinIngresado;
    int intentos = 0;

    while (intentos < 3) {
        cout << "Ingresa tu PIN de 4 dígitos: ";
        cin >> pinIngresado;

        if (pinIngresado == PIN_CORRECTO) {
            cout << "PIN correcto. Acceso permitido." << endl;
            break;
        } else {
            intentos++;
            cout << "PIN incorrecto. Intento " << intentos << " de 3." << endl;
        }
    }

    if (intentos == 3)
        cout << "Has superado el número máximo de intentos. Acceso bloqueado." << endl;

    return 0;
}




