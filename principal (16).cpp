#include <iostream>
using namespace std;

// Función para contar positivos, negativos y ceros
void contarElementos(int arr[], int n, int &positivos, int &negativos, int &ceros) {
    positivos = 0;
    negativos = 0;
    ceros = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) positivos++;
        else if (arr[i] < 0) negativos++;
        else ceros++;
    }
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

    int positivos, negativos, ceros;
    contarElementos(arr, n, positivos, negativos, ceros);

    // Mostrar resultados
    cout << "Cantidad de positivos: " << positivos << endl;
    cout << "Cantidad de negativos: " << negativos << endl;
    cout << "Cantidad de ceros: " << ceros << endl;

    return 0;
}











