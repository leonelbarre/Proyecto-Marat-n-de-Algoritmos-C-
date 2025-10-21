#include <iostream>

int main() {
    int* array[5];

    // Asignar memoria dinámica y almacenar valores
    for(int i = 0; i < 5; i++) {
        array[i] = new int;
        *array[i] = (i + 1) * 10; // Ejemplo de valores: 10, 20, 30, 40, 50
    }

    // Mostrar valores
    for(int i = 0; i < 5; i++) {
        std::cout << "Valor en array[" << i << "] = " << *array[i] << std::endl;
    }

    // Liberar memoria
    for(int i = 0; i < 5; i++) {
        delete array[i];
    }

    return 0;
}
