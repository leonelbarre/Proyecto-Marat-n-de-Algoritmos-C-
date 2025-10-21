#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;

    // 1. Pedir número
    cout << "Ingresa un número entero positivo: ";
    cin >> N;

    // 2. Calcular suma alternada
    for (int i = 1; i <= N; ++i) {
        if (i % 2 == 0)
            suma -= i; // número par: restar
        else
            suma += i; // número impar: sumar
    }

    // 3. Mostrar resultado
    cout << "La suma alternada hasta " << N << " es: " << suma << endl;

    return 0;
}




