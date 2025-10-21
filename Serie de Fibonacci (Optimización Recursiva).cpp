#include <iostream>
using namespace std;

// Función recursiva optimizada con memoización
int fibonacci(int n, int memo[]) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    // Si ya fue calculado, devolver el valor guardado
    if (memo[n] != -1)
        return memo[n];

    // Guardar el resultado de la suma
    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    return memo[n];
}

int main() {
    int n;

    cout << "Ingrese el término N de la serie de Fibonacci: ";
    cin >> n;

    if (n < 0) {
        cout << "Error: N debe ser un número positivo." << endl;
        return 1;
    }

    // Crear un array memo inicializado con -1
    int memo[100];
    for (int i = 0; i < 100; i++)
        memo[i] = -1;

    cout << "El término " << n << " de la serie de Fibonacci es: " 
         << fibonacci(n, memo) << endl;

    return 0;
}