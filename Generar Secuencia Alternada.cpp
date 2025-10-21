#include <iostream>
using namespace std;

// Función que genera una secuencia alternada de 1 y 0
void generarSecuenciaAlternada(int n) {
    int secuencia[n];

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0)
            secuencia[i] = 1;
        else
            secuencia[i] = 0;
    }

    cout << "Secuencia generada: ";
    for (int i = 0; i < n; ++i)
        cout << secuencia[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Ingrese la longitud de la secuencia: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: El número debe ser mayor que cero." << endl;
        return 1;
    }

    generarSecuenciaAlternada(n);
    return 0;
}
