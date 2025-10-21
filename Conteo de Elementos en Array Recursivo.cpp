#include <iostream>
using namespace std;

// Función recursiva para contar elementos iguales a 'valor'
int contarElementos(int arr[], int n, int valor) {
    if (n == 0)
        return 0; // Caso base: array vacío
    if (arr[0] == valor)
        return 1 + contarElementos(arr + 1, n - 1, valor);
    else
        return contarElementos(arr + 1, n - 1, valor);
}

int main() {
    int n;
    cout << "Ingrese el tamaño del array: ";
    cin >> n;

    int arr[n];
    cout << "Ingrese los elementos del array:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int valor;
    cout << "Ingrese el valor a buscar: ";
    cin >> valor;

    int resultado = contarElementos(arr, n, valor);

    cout << "El valor " << valor << " aparece " << resultado << " veces en el array." << endl;

    return 0;
}