#include <iostream>
using namespace std;

int main() {
    int numero, contador = 0;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if(numero == 0) contador = 1;

    while(numero > 0) {
        numero /= 10;
        contador++;
    }

    cout << "El numero tiene " << contador << " digitos." << endl;
    return 0;
}




