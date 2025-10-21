#include <iostream>

int sumarArray(int* arr, int n) {
    int suma = 0;
    for(int i = 0; i < n; i++) {
        suma += *(arr + i); // Aritmética de punteros
    }
    return suma;
}

int main() {
    int n;
    std::cout << "Ingrese el tamaño del arreglo: ";
    std::cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        std::cout << "Ingrese el elemento " << i+1 << ": ";
        std::cin >> arr[i];
    }

    int resultado = sumarArray(arr, n);
    std::cout << "La suma de los elementos es: " << resultado << std::endl;

    return 0;
}
