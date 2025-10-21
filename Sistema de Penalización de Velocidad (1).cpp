#include <iostream>
using namespace std;

int main() {
    int velocidadLimite, velocidadVehiculo;

    // 1. Pedir velocidades
    cout << "Ingresa la velocidad límite (km/h): ";
    cin >> velocidadLimite;
    cout << "Ingresa la velocidad del vehículo (km/h): ";
    cin >> velocidadVehiculo;

    // 2. Evaluar multa
    if (velocidadVehiculo > velocidadLimite + 20)
        cout << "Excediste la velocidad por más de 20 km/h. Multa mayor." << endl;
    else if (velocidadVehiculo > velocidadLimite)
        cout << "Excediste la velocidad pero por menos de 20 km/h. Multa menor." << endl;
    else
        cout << "Velocidad correcta. No hay sanción." << endl;

    return 0;
}


