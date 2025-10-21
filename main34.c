#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese una palabra o frase: ";
    getline(cin, texto);

    string limpio = "";
    for(char c : texto) {
        if(isalnum(c)) limpio += tolower(c);
    }

    bool esPalindromo = true;
    int n = limpio.length();
    for(int i = 0; i < n/2; i++) {
        if(limpio[i] != limpio[n-1-i]) {
            esPalindromo = false;
            break;
        }
    }

    if(esPalindromo)
        cout << "Es un palindromo." << endl;
    else
        cout << "No es un palindromo." << endl;

    return 0;
}

