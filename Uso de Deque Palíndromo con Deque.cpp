#include <iostream>
#include <deque>
#include <cctype> // para tolower
using namespace std;

bool es_palindromo(const string &texto) {
    deque<char> dq;
    for (char c : texto) {
        if (isalpha(c)) { // Ignorar espacios y signos
            dq.push_back(tolower(c));
        }
    }

    while (dq.size() > 1) {
        if (dq.front() != dq.back()) {
            return false;
        }
        dq.pop_front();
        dq.pop_back();
    }
    return true;
}

int main() {
    string cadena1 = "Anita lava la tina";
    string cadena2 = "Hola Mundo";

    cout << "\"" << cadena1 << "\" es palíndromo? " 
         << (es_palindromo(cadena1) ? "Sí" : "No") << endl; // Sí

    cout << "\"" << cadena2 << "\" es palíndromo? " 
         << (es_palindromo(cadena2) ? "Sí" : "No") << endl; // No

    return 0;
}
