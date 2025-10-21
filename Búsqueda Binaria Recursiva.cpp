#include <iostream>
using namespace std;

// Función recursiva de búsqueda binaria
int busquedaBinaria(int arr[], int inicio, int fin, int x) {
    if (inicio > fin)
        return -1; // No encontrado

    int mitad = (inicio + fin) / 2;

    if (arr[mitad] == x)
        return mitad;
    else if (x < arr[mitad])
        return busquedaBinaria(arr, inicio, mitad - 1, x);
    else
        return busquedaBinaria(arr, mitad + 1, fin, x);
}

int main() {
    int n, x;

    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    int arr[n];
    cout << "Ingrese los elementos ordenados del arreglo:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Ingrese el número a buscar: ";
    cin >> x;

    int resultado = busquedaBinaria(arr, 0, n - 1, x);

    if (resultado == -1)
        cout << "El número " << x << " no se encuentra en el arreglo." << endl;
    else
        cout << "El número " << x << " se encuentra en la posición: " << resultado << endl;

    return 0;
}