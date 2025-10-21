#include <iostream>
using namespace std;

int main() {
    int puntos = 100, infracciones, puntosPerdidos;
    cout << "Ingrese el número de infracciones: ";
    cin >> infracciones;

    for(int i=1; i<=infracciones; i++){
        cout << "Ingrese los puntos perdidos en la infracción " << i << ": ";
        cin >> puntosPerdidos;
        puntos -= puntosPerdidos;
    }

    cout << "Puntos restantes: " << puntos << endl;

    if(puntos > 0)
        cout << "El carnet sigue válido." << endl;
    else
        cout << "El carnet ha sido suspendido." << endl;

    return 0;
}

