#include <iostream>

void copiarArray(int* origen, int* destino, int N) {
    for(int i = 0; i < N; i++) {
        *(destino + i) = *(origen + i); // Copiar usando punteros
    }
}

int main() {
    int N;
    std::cout << "Ingrese el tamaño del arreglo: ";
    std::cin >> N;

    int* arrOrigen = new int[N];
    int* arrDestino = new int[N];

    for(int i = 0; i < N; i++) {
        std::cout << "Ingrese el valor " << i+1 << ": ";
        std::cin >> arrOrigen[i];
    }

    copiarArray(arrOrigen, arrDestino, N);

    std::cout << "El arreglo destino es: ";
    for(int i = 0; i < N; i++) {
        std::cout << arrDestino[i] << " ";
    }
    std::cout << std::endl;

    delete[] arrOrigen;
    delete[] arrDestino;

    return 0;
}
