#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
using namespace std;

int main() {
    int numeroSecreto, intento, intentos = 0;
    const int MAX_INTENTOS = 5;

    srand(time(0));  // Inicializa la semilla aleatoria
    numeroSecreto = rand() % 100 + 1;  // Número entre 1 y 100

    cout << "=== JUEGO DE ADIVINANZA ===" << endl;
    cout << "He pensado un numero entre 1 y 100." << endl;
    cout << "Tienes " << MAX_INTENTOS << " intentos para adivinarlo." << endl;

    while (intentos < MAX_INTENTOS) {
        cout << "\nIntento #" << (intentos + 1) << ": ";
        cin >> intento;
        intentos++;

        if (intento == numeroSecreto) {
            cout << "¡Felicidades! Adivinaste el numero en " << intentos << " intentos." << endl;
            break;
        } else if (intento < numeroSecreto) {
            cout << "El numero secreto es MAYOR." << endl;
        } else {
            cout << "El numero secreto es MENOR." << endl;
        }
    }

    if (intento != numeroSecreto) {
        cout << "\n¡Se acabaron los intentos! El numero era: " << numeroSecreto << endl;
    }

    cout << "Gracias por jugar." << endl;
    return 0;
}

