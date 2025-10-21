#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingresa un número entero mayor que 1: ";
    cin >> N;

    if (N <= 1) {
        cout << "Error: el número debe ser mayor que 1." << endl;
        return 1;
    }

    for (int i = 2; i <= N; ++i) {
        if (N % i == 0) {
            cout << "El primer divisor distinto de 1 es: " << i << endl;
            break;
        }
    }

    return 0;
}
