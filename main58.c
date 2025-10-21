#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    if (numero % 5 == 0 && numero % 10 == 0) {
        cout << "El número " << numero << " es divisible por 5 y por 10." << endl;
    } else {
        cout << "El número " << numero << " no es divisible por 5 y 10 al mismo tiempo." << endl;
    }

    return 0;
}

