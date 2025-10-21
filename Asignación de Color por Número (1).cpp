#include <iostream>
using namespace std;

int main() {
    int numero;

    // 1. Pedir número
    cout << "Ingresa un número del 1 al 5: ";
    cin >> numero;

    // 2. Asignar color
    if (numero == 1)
        cout << "Color: Rojo" << endl;
    else if (numero == 2)
        cout << "Color: Azul" << endl;
    else if (numero == 3)
        cout << "Color: Verde" << endl;
    else if (numero == 4)
        cout << "Color: Amarillo" << endl;
    else if (numero == 5)
        cout << "Color: Naranja" << endl;
    else
        cout << "Color Desconocido" << endl;

    return 0;
}


