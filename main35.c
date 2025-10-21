#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numeroSecreto = rand() % 100 + 1;
    int intento;
    cout << "Adivina el numero (entre 1 y 100): ";

    do {
        cin >> intento;
        if(intento < numeroSecreto)
            cout << "Muy bajo. Intenta de nuevo: ";
        else if(intento > numeroSecreto)
            cout << "Muy alto. Intenta de nuevo: ";
    } while(intento != numeroSecreto);

    cout << "¡Felicidades! Adivinaste el numero: " << numeroSecreto << endl;
    return 0;
}

