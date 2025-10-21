
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int puntajeTotal = 0;

    for(int i = 1; i <= 5; i++) {
        int puntaje = rand() % 11; // 0 a 10
        puntajeTotal += puntaje;
        cout << "Disparo " << i << ": " << puntaje << " puntos" << endl;
    }

    cout << "Puntaje total: " << puntajeTotal << endl;
    if(puntajeTotal == 50)
        cout << "¡Felicidades! Puntaje perfecto." << endl;
    else
        cout << "Sigue practicando para mejorar tu puntaje." << endl;

    return 0;
}


