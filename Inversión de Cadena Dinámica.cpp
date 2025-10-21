#include <iostream>
#include <cstring>

void invertir_cadena(char* cadena) {
    char* inicio = cadena;
    char* fin = cadena + strlen(cadena) - 1;
    while(inicio < fin) {
        char temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        inicio++;
        fin--;
    }
}

int main() {
    char cadena[100];
    std::cout << "Ingresa una cadena: ";
    std::cin.getline(cadena, 100);

    invertir_cadena(cadena);
    std::cout << "Cadena invertida: " << cadena << std::endl;

    return 0;
}