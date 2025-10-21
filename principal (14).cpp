#include <iostream>
using namespace std;

// Función para invertir un array
void invertirArray(int arr[], int n) {
    for (int i = n-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Función para sumar los elementos de un array
int sumarArray(int arr[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return suma;
}

int main() {
    int n;

    // Entrada del tamaño del array
    cout << "Ingrese el tamaño del array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: el tamaño debe ser positivo." << endl;
        return 1;
    }

    int arr[n];

    // Entrada de los elementos
    cout << "Ingrese " << n << " números enteros: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Mostrar array original
    cout << "Array original: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Mostrar array invertido
    cout << "Array invertido: ";
    invertirArray(arr, n);

    // Calcular y mostrar la suma
    int suma = sumarArray(arr, n);
    cout << "Suma de los elementos: " << suma << endl;

    return 0;
}










