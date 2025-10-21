#include <iostream>

int main() {
    int N, M;

    std::cout << "Ingrese el tamaño inicial del array: ";
    std::cin >> N;

    int* arr = new int[N];
    for (int i = 0; i < N; ++i) {
        std::cout << "Ingrese valor para arr[" << i << "]: ";
        std::cin >> arr[i];
    }

    std::cout << "Array original: ";
    for (int i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Ingrese el nuevo tamaño del array (mayor que " << N << "): ";
    std::cin >> M;

    int* nuevoArr = new int[M];
    for (int i = 0; i < N; ++i) {
        nuevoArr[i] = arr[i];
    }

    delete[] arr; // liberar memoria vieja
    arr = nuevoArr;

    std::cout << "Array después de redimensionar: ";
    for (int i = 0; i < M; ++i) {
        if(i < N) 
            std::cout << arr[i] << " ";
        else
            arr[i] = 0; // inicializar nuevas posiciones
            std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr; // liberar memoria final
    return 0;
}

