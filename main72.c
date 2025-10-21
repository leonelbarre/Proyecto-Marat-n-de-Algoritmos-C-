#include <iostream>
using namespace std;

int main() {
    int n, esPrimo = 1;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    if (n <= 1) {
        cout << "No es primo.";
        return 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            esPrimo = 0;
            break;
        }
    }

    if (esPrimo)
        cout << n << " es primo.";
    else
        cout << n << " no es primo.";

    return 0;
}
