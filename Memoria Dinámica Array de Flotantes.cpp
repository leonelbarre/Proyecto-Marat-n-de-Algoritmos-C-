#include <iostream>

int main() {
    int N;
    std::cout << "Ingrese el tamaño del arreglo: ";
    std::cin >> N;

    float* arr = new float[N]; // Asignación dinámica

    for(int i = 0; i < N; i++) {
        std::cout << "Ingrese el valor " << i+1 << ": ";
        std::cin >> arr[i];
    }

    std::cout << "Los elementos del arreglo son: ";
    for(int i = 0; i < N; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr; // Liberar memoria
    return 0;
}

