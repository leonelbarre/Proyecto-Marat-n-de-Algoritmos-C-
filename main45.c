#include <iostream>
using namespace std;

int main() {
    int totalSegundos;
    cout << "Ingrese el tiempo en segundos: ";
    cin >> totalSegundos;

    int horas = totalSegundos / 3600;
    int minutos = (totalSegundos % 3600) / 60;
    int segundos = totalSegundos % 60;

    cout << "Tiempo equivalente: " << horas << "h:" << minutos << "m:" << segundos << "s" << endl;

    return 0;
}




