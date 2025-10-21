#include <iostream>
using namespace std;

int main() {
    int base, exponente, resultado = 1;

    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    if(exponente < 0)
        cout << "Exponente negativo no permitido." << endl;
    else {
        for(int i = 0; i < exponente; i++)
            resultado *= base;
        cout << base << "^" << exponente << " = " << resultado << endl;
    }

    return 0;
}

