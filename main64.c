#include <iostream>
using namespace std;

int main() {
    int dividendo, divisor;

    cout << "Ingrese el dividendo: ";
    cin >> dividendo;
    cout << "Ingrese el divisor: ";
    cin >> divisor;

    if (divisor == 0) {
        cout << "Error: No se puede dividir entre cero." << endl;
        return 1;
    }

    int cociente = dividendo / divisor;
    int residuo = dividendo % divisor;

    cout << "El cociente es: " << cociente << endl;
    cout << "El residuo es: " << residuo << endl;

    return 0;
}

