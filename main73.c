#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena1, cadena2;

    cout << "Ingrese la primera cadena: ";
    getline(cin, cadena1);
    cout << "Ingrese la segunda cadena: ";
    getline(cin, cadena2);

    if(cadena1 == cadena2)
        cout << "Las cadenas son iguales." << endl;
    else
        cout << "Las cadenas son diferentes." << endl;

    return 0;
}
