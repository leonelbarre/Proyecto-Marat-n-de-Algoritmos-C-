#include <iostream>

void modificarValor(int** ptr) {
    **ptr = 999; // Cambia el valor al que apunta el puntero original
}

int main() {
    int numero;
    std::cout << "Ingresa un número entero: ";
    std::cin >> numero;

    int* puntero = &numero;
    int** doblePuntero = &puntero;

    modificarValor(doblePuntero);

    std::cout << "El valor modificado es: " << numero << std::endl;
    return 0;
}