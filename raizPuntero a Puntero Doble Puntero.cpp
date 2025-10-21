#include <iostream>

void modificar_valor(int** ptr, int nuevo_valor) {
    **ptr = nuevo_valor;
}

int main() {
    int num = 10;
    int* p = &num;

    std::cout << "Valor inicial: " << num << std::endl;

    modificar_valor(&p, 25);

    std::cout << "Valor modificado: " << num << std::endl;

    return 0;
}