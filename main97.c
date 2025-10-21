#include <iostream>
using namespace std;

int main() {
    double litros, precio, total;
    cout << "Ingrese litros consumidos y precio por litro: ";
    cin >> litros >> precio;

    total = litros * precio;
    cout << "El costo total es: " << total << endl;
    return 0;
}
