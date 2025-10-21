#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Ingrese el primer número (A): ";
    cin >> a;
    cout << "Ingrese el segundo número (B): ";
    cin >> b;

    cout << "Antes del intercambio: A = " << a << ", B = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "Después del intercambio: A = " << a << ", B = " << b << endl;

    return 0;
}

