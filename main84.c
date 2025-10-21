#include <iostream>
using namespace std;

int main() {
    int pin_correcto = 1234, pin_ingresado;

    cout << "Ingrese su PIN de 4 dígitos: ";
    cin >> pin_ingresado;

    if(pin_ingresado == pin_correcto)
        cout << "PIN correcto." << endl;
    else
        cout << "PIN incorrecto." << endl;

    return 0;
}
