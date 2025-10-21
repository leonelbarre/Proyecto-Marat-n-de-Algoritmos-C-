
#include <iostream>
using namespace std;

int main() {
    float precio, iva, total;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    cout << "Ingrese el porcentaje de IVA: ";
    cin >> iva;

    total = precio + (precio * iva / 100);

    cout << "El precio final con IVA es: " << total << endl;

    return 0;
}
