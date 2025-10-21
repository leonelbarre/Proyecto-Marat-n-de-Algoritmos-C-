#include <iostream>
using namespace std;

class Calculadora {
public:
    static float sumar(float a, float b) {
        return a + b;
    }
};

int main() {
    float num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    float resultado = Calculadora::sumar(num1, num2);
    cout << "La suma es: " << resultado << endl;

    return 0;
}
