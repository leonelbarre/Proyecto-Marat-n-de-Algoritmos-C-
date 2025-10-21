#include <iostream>
#include <cstring>

char* buscarCaracter(char* cadena, char c) {
    char* ptr = cadena;
    while (*ptr != '\0') {
        if (*ptr == c) {
            return ptr;
        }
        ptr++;
    }
    return NULL;
}

int main() {
    char cadena[100];
    char c;

    std::cout << "Ingrese una cadena: ";
    std::cin.getline(cadena, 100);

    std::cout << "Ingrese el caracter a buscar: ";
    std::cin >> c;

    char* resultado = buscarCaracter(cadena, c);
    if (resultado != NULL) {
        std::cout << "Caracter encontrado en la posicion: " 
                  << resultado - cadena << std::endl;
    } else {
        std::cout << "Caracter no encontrado." << std::endl;
    }

    return 0;
}

