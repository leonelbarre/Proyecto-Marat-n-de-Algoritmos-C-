#include <iostream>
using namespace std;

int main() {
    int n, buscar;
    cout << "Ingrese tamaño del arreglo: ";
    cin >> n;

    int arr[n];
    cout << "Ingrese los elementos del arreglo: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Ingrese el número a buscar: ";
    cin >> buscar;

    bool encontrado = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == buscar) {
            encontrado = true;
            break;
        }
    }

    if(encontrado) cout << "Número encontrado." << endl;
    else cout << "Número no encontrado." << endl;

    return 0;
}
