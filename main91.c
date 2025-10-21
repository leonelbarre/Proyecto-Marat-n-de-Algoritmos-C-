#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double lado, volumen;
    cout << "Ingrese la longitud del lado del cubo: ";
    cin >> lado;

    volumen = pow(lado,3);
    cout << "El volumen del cubo es: " << volumen << endl;
    return 0;
}
