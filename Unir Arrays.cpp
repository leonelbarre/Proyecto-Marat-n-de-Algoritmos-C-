//Titulo: Area de un circulo //
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double radio, área;
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;
    área = M_PI * pow(radio, 2);
    cout << "El área del círculo es: " << área << endl;
    return 0;
}
