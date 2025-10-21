#include <iostream>
using namespace std;

class Fraccion {
private:
    int numerador;
    int denominador;
public:
    Fraccion(int n, int d) {
        numerador = n;
        denominador = d;
    }

    int mcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    void simplificar() {
        int divisor = mcd(numerador, denominador);
        numerador /= divisor;
        denominador /= divisor;
    }

    void mostrar() {
        cout << "Fracción simplificada: " << numerador << "/" << denominador << endl;
    }
};

int main() {
    int num, den;
    cout << "Ingresa numerador: ";
    cin >> num;
    cout << "Ingresa denominador: ";
    cin >> den;

    if (den == 0) {
        cout << "Error: El denominador no puede ser cero." << endl;
        return 1;
    }

    Fraccion f(num, den);
    f.simplificar();
    f.mostrar();

    return 0;
}