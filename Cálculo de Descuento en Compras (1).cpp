#include <iostream>
using namespace std;

int main() {
    double precio, descuento, precioFinal;

    // 1. Pedir datos al usuario
    cout << "Ingresa el precio del producto: ";
    cin >> precio;
    cout << "Ingresa el porcentaje de descuento: ";
    cin >> descuento;

    // 2. Validar valores
    if (precio < 0 || descuento < 0 || descuento > 100) {
        cout << "Error: Valores inválidos." << endl;
        return 1;
    }

    // 3. Calcular precio final
    precioFinal = precio - (precio * descuento / 100);

    // 4. Mostrar resultado
    cout << "El precio final del producto es: " << precioFinal << endl;

    return 0;
}
