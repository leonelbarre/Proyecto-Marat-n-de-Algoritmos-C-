#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0;

    cout << "Ingrese números (0 para terminar): " << endl;
    do {
        cin >> numero;
        suma += numero;
    } while(numero != 0);

    cout << "La suma total es: " << suma << endl;
    return 0;
}


