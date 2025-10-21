#include <iostream>
#include <cmath>
using namespace std;

class Circulo {
private:
    double radio;

public:
    Circulo(double r) {
        radio = r;
    }

    double circunferencia() {
        return 2 * M_PI * radio;
    }
};

int main() {
    double r;
    cout << "Ingrese el radio del círculo: ";
    cin >> r;

    Circulo c(r);
    cout << "La circunferencia del círculo es: " << c.circunferencia() << endl;

    return 0;
}