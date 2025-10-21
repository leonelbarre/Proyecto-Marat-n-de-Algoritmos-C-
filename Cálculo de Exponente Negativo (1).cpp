#include <iostream>
using namespace std;

int main() {
    double base, resultado = 1;
    int exponente;

    // 1. Pedir datos al usuario
    cout << "Ingresa la base: ";
    cin >> base;
    cout << "Ingresa un exponente negativo: ";
    cin >> exponente;

    if (exponente >= 0) {
        cout << "Error: el exponente debe ser negativo." << endl;
        return 1;
    }

    int absExp = -exponente;

    // 2. Calcular potencia usando bucle
    for (int i = 0; i < absExp; ++i) {
        resultado *= base;
    }

    // 3. Resultado final
    resultado = 1 / resultado;

    cout << base << " elevado a " << exponente << " es: " << resultado << endl;

    return 0;
}
