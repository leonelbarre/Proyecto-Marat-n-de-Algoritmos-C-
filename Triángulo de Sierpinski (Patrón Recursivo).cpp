#include <iostream>
using namespace std;

// Función recursiva para imprimir espacios
void imprimirEspacios(int n) {
    if (n == 0)
        return;
    cout << " ";
    imprimirEspacios(n - 1);
}

// Función recursiva para imprimir los niveles del triángulo
void imprimirSierpinski(int nivel, int maxNivel) {
    if (nivel == 0)
        return;

    imprimirSierpinski(nivel - 1, maxNivel);

    imprimirEspacios(maxNivel - nivel);
    for (int i = 0; i < 2 * nivel - 1; i++)
        cout << "*";
    cout << endl;
}

int main() {
    int N;
    cout << "Ingrese el número de niveles del triángulo de Sierpinski: ";
    cin >> N;

    imprimirSierpinski(N, N);

    return 0;
}