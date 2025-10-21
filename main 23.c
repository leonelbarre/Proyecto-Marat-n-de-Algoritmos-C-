#include <iostream>
using namespace std;

int main() {
    float monto, descuento = 0, total;

    cout << "Ingrese el monto total de su compra: $";
    cin >> monto;

    if (monto < 100) {
        descuento = 0;
    } else if (monto <= 500) {
        descuento = monto * 0.10;
    } else if (monto <= 1000) {
        descuento = monto * 0.15;
    } else {
        descuento = monto * 0.20;
    }

    total = monto - descuento;

    cout << "\n--- RESUMEN DE COMPRA ---" << endl;
    cout << "Monto original: $" << monto << endl;
    cout << "Descuento aplicado: $" << descuento << endl;
    cout << "Total a pagar: $" << total << endl;

    return 0;
}


