#include <iostream>
using namespace std;

int main() {
    int edad;

    // 1. Pedir la edad
    cout << "Ingresa tu edad: ";
    cin >> edad;

    // 2. Validar que sea positiva
    if (edad < 0) {
        cout << "Edad inválida. Debe ser un número positivo." << endl;
        return 1;
    }

    // 3. Verificar si puede votar
    if (edad >= 18)
        cout << "Puedes votar." << endl;
    else
        cout << "No puedes votar." << endl;

    return 0;
}

