#include <iostream>
using namespace std;

int minimoRecursivo(int arr[], int n) {
    if (n == 1)
        return arr[0]; // Caso base
    int minSub = minimoRecursivo(arr, n - 1);
    return (arr[n - 1] < minSub) ? arr[n - 1] : minSub;
}

int main() {
    int n;
    cout << "Ingrese el tamaño del array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arr[i];
    }

    int minimo = minimoRecursivo(arr, n);
    cout << "El valor mínimo del array es: " << minimo << endl;

    return 0;
}