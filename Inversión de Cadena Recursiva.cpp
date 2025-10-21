#include <iostream>
using namespace std;

// Función recursiva para invertir una cadena
void invertirCadena(char *cadena) {
    if (*cadena == '\0')  // Caso base: fin de cadena
        return;
    invertirCadena(cadena + 1); // Llamada recursiva
    cout << *cadena; // Imprimir el carácter después de la llamada
}

int main() {
    char texto[100];
    cout << "Ingrese una cadena: ";
    cin.getline(texto, 100);

    cout << "La cadena invertida es: ";
    invertirCadena(texto);
    cout << endl;

    return 0;
}