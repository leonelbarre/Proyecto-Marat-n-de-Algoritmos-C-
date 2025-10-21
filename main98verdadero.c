#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "Después del intercambio:" << endl;
    cout << "Primer número: " << a << endl;
    cout << "Segundo número: " << b << endl;

    return 0;
}

