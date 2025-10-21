#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    int contadorVocales = 0;

    cout << "Ingrese una palabra o frase: ";
    getline(cin, texto);  // Permite leer espacios

    for (int i = 0; i < texto.length(); i++) {
        char c = tolower(texto[i]); // Convertir a minúscula
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contadorVocales++;
        }
    }

    cout << "El texto contiene " << contadorVocales << " vocal(es)." << endl;

    return 0;
}
