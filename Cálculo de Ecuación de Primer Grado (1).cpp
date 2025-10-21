#include <iostream>
using namespace std;

int main() {
    double a, b, x;

    // 1. Pedir coeficientes
    cout << "Ingresa el coeficiente a: ";
    cin >> a;
    cout << "Ingresa el coeficiente b: ";
    cin >> b;

    // 2. Verificar caso especial
    if (a == 0) {
        if (b == 0)
            cout << "La ecuación es indeterminada (infinitas soluciones)." << endl;
        else
            cout << "La ecuación no tiene solución." << endl;
    } else {
        // 3. Calcular x
        x = -b / a;
        cout << "La solución de la ecuación es x = " << x << endl;
    }



