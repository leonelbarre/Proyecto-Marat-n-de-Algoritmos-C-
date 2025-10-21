#include <iostream>
using namespace std;

int main() {
    int numero, divisor;

    cout << "Ingrese un número: ";
    cin >> numero;
    cout << "Ingrese el divisor: ";
    cin >> divisor;

    if(divisor == 0)
        cout << "No se puede dividir entre cero." << endl;
    else if(numero % divisor == 0)
        cout << numero << " es múltiplo de " << divisor << endl;
    else
        cout << numero << " no es múltiplo de " << divisor << endl;

    return 0;
}

