#include <iostream>
using namespace std;

int main() {
    int op; float t;
    cout << "1. C a F\n2. F a C\nOpcion: ";
    cin >> op;
    cout << "Temperatura: ";
    cin >> t;

    if (op == 1)
        cout << "Resultado: " << (t * 9/5) + 32 << " °F";
    else if (op == 2)
        cout << "Resultado: " << (t - 32) * 5/9 << " °C";
    else
        cout << "Opcion invalida.";

    return 0;
}

