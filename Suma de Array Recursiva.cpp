#include <iostream>
using namespace std;

// Función recursiva para sumar los elementos del array
int sumaRecursiva(int arr[], int n) {
    if (n == 0)  // Caso base
        return 0;
    else
        return arr[n - 1] + sumaRecursiva(arr, n - 1); // Paso recursivo
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int tamaño = sizeof(arr) / sizeof(arr[0]);

    int suma = sumaRecursiva(arr, tamaño);

    cout << "La suma de los elementos del array es: " << suma << endl;

    return 0;
}