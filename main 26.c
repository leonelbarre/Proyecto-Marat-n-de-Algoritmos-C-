#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
using namespace std;

int main() {
    int numeroSecreto, intento, intentos = 0;

    // Inicializar el generador de números aleatorios
    srand(time(0));
    numeroSecreto = rand() % 100 + 1; // Número entre 1 y 100

    cout << "=== JUEGO: ADIVINA EL NUMERO ===" << endl;
    cout << "He pensado un numero entre 1 y 100..." << endl;

    do {
        cout << "Ingresa tu intento: ";
        cin >> intento;
        intentos++;

        if (intento > numeroSecreto) {
            cout << "Demasiado alto. Intenta con un numero menor." << endl;
        } else if (intento < numeroSecreto) {
            cout << "Demasiado bajo. Intenta con un numero mayor." << endl;
        } else {
            cout << "🎉 ¡Correcto! Adivinaste el numero en " << intentos << " intentos." << endl;
        }

    } while (intento != numeroSecreto);

    return 0;
}

