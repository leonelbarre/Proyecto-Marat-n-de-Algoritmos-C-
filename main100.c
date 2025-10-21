#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    if(num > 0 && num % 5 == 0)
        cout << "El número es positivo y múltiplo de 5." << endl;
    else
        cout << "El número no cumple ambas condiciones." << endl;

    return 0;
}
