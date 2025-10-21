#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string texto;
    int opcion;

    cout << "Ingrese un texto: ";
    getline(cin, texto);
    cout << "Seleccione 1 para MAYUSCULAS o 2 para minusculas: ";
    cin >> opcion;

    for(int i = 0; i < texto.length(); i++) {
        if(opcion == 1) texto[i] = toupper(texto[i]);
        else if(opcion == 2) texto[i] = tolower(texto[i]);
    }

    cout << "Texto convertido: " << texto << endl;
    return 0;
}

