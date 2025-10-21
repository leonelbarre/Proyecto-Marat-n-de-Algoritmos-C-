#include <iostream>
using namespace std;

int main() {
    char caracter;

    cout << "Ingrese un carácter: ";
    cin >> caracter;

    cout << "El valor ASCII de '" << caracter << "' es: " << int(caracter) << endl;

    return 0;
}

