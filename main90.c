#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese tamaño del arreglo: ";
    cin >> n;

    int arr[n], duplicado[n];
    cout << "Ingrese los elementos del arreglo: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
        duplicado[i] = arr[i]*2;
    }

    cout << "Arreglo duplicado: ";
    for(int i=0;i<n;i++)
        cout << duplicado[i] << " ";
    cout << endl;

    return 0;
}
