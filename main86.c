#include <iostream>
using namespace std;

int main() {
    int a, b, r;

    cout << "Ingrese dos números enteros: ";
    cin >> a >> b;

    while(b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    cout << "El MCD es: " << a << endl;
    return 0;
}
