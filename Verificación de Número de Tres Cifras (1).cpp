#include <iostream>
using namespace std;

int main() {
    int numero;

    // 1. Pedir el número
    cout << "Ingresa un número entero: ";
    cin >> numero;

    // 2. Verificar si tiene tres cifras
    if ((numero >= 100 && numero <= 999) || (numero <= -100 && numero >= -999)) {
        cout << "El número " << numero << " tiene tres cifras." << endl;
    } else {
        cout << "El número " << numero << " no tiene tres cifras." << endl;
    }

    return 0;
}
