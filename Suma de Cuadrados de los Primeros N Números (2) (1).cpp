#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;

    // 1. Pedir número
    cout << "Ingresa un número entero positivo: ";
    cin >> N;

    // 2. Sumar cuadrados
    for (int i = 1; i <= N; ++i) {
        suma += i * i;
    }

    // 3. Mostrar resultado
    cout << "La suma de los cuadrados de los primeros " << N << " números es: " << suma << endl;

    return 0;
}



