#include <iostream>
using namespace std;

int main() {
    double numero;

    // 1. Pedir número
    cout << "Ingresa un número: ";
    cin >> numero;

    // 2. Validar rangos
    if ((numero >= 10 && numero <= 20) || (numero >= 80 && numero <= 90))
        cout << "El número está dentro del rango permitido." << endl;
    else
        cout << "El número NO está dentro del rango permitido." << endl;

    return 0;
}



