#include <iostream>
using namespace std;

int main() {
    int nivel;

    // 1. Pedir nivel
    cout << "Ingresa el nivel (1-3): ";
    cin >> nivel;

    // 2. Determinar rango
    if (nivel == 1)
        cout << "Rango: Soldado" << endl;
    else if (nivel == 2)
        cout << "Rango: Sargento" << endl;
    else if (nivel == 3)
        cout << "Rango: Capitán" << endl;
    else
        cout << "Nivel inválido" << endl;

    return 0;
}
