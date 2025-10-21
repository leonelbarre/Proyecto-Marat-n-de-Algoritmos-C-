#include <iostream>
using namespace std;

// Función que calcula el producto de los elementos en posiciones impares
int productoPosicionesImpares(int arr[], int n) {
    int producto = 1;
    bool hayImpares = false;

    for (int i = 0; i < n; ++i) {
        if (i % 2 != 0) {
            producto *= arr[i];
            hayImpares = true;
        }
    }

    if (!hayImpares)
        return 0; // Si no hay posiciones impares, el producto es 0

    return producto;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos del arreglo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: La cantidad debe ser mayor que cero." << endl;
        return 1;
    }

    int arr[n];
    cout << "Ingrese los elementos del arreglo: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Elemento " << i << ": ";
        cin >> arr[i];
    }

    int resultado = productoPosicionesImpares(arr, n);

    if (resultado == 0)
        cout << "No hay posiciones impares en el arreglo." << endl;
    else
        cout << "El producto de los elementos en posiciones impares es: " << resultado << endl;

    return 0;
}

