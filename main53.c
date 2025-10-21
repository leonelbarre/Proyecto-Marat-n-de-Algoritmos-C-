#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;
    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        fact *= i;

    cout << "El factorial de " << n << " es: " << fact << endl;
    return 0;
}
