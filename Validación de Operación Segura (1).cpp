#include <iostream>
using namespace std;

int main() {
    double dividendo, divisor;

    // 1. Pedir al usuario los números
    cout << "Ingresa el dividendo: ";
    cin >> dividendo;
    cout << "Ingresa el divisor: ";
    cin >> divisor;

    // 2. Validar divisor
    if (divisor != 0) {
        double resultado = dividendo / divisor;
        cout << "Resultado de la división: " << resultado << endl;
    } else {
        cout << "Error: No se puede dividir entre cero." << endl;
    }

    return 0;
}
