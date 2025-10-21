#include <iostream>
using namespace std;

int main() {
    int horas;
    float tarifa = 2.5, costo;

    cout << "Ingrese la cantidad de horas estacionado: ";
    cin >> horas;

    if(horas < 0)
        cout << "Cantidad de horas inválida." << endl;
    else {
        costo = horas * tarifa;
        cout << "El costo total del estacionamiento es: " << costo << endl;
    }

    return 0;
}
