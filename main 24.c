#include <iostream>
using namespace std;

int main() {
    float cantidad, resultado;
    int opcion;

    cout << "=== CONVERSOR DE LITROS Y GALONES ===" << endl;
    cout << "1. Convertir de litros a galones" << endl;
    cout << "2. Convertir de galones a litros" << endl;
    cout << "Seleccione una opción (1 o 2): ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Ingrese la cantidad en litros: ";
        cin >> cantidad;
        resultado = cantidad / 3.785;
        cout << cantidad << " litros equivalen a " << resultado << " galones." << endl;
    } else if (opcion == 2) {
        cout << "Ingrese la cantidad en galones: ";
        cin >> cantidad;
        resultado = cantidad * 3.785;
        cout << cantidad << " galones equivalen a " << resultado << " litros." << endl;
    } else {
        cout << "Opción no válida. Intente nuevamente." << endl;
    }

    return 0;
}
