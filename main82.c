#include <iostream>
using namespace std;

int main() {
    int a1, d, n;

    cout << "Ingrese el valor inicial: ";
    cin >> a1;
    cout << "Ingrese la diferencia común: ";
    cin >> d;
    cout << "Ingrese el número de términos: ";
    cin >> n;

    cout << "Secuencia aritmética: ";
    for(int i = 0; i < n; i++)
        cout << a1 + i*d << " ";
    cout << endl;

    return 0;
}

