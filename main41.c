#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int lanzamientos, totalPuntos = 0;

    cout << "Ingrese el numero de lanzamientos: ";
    cin >> lanzamientos;

    for(int i = 1; i <= lanzamientos; i++) {
        int dado1 = rand() % 6 + 1;
        int dado2 = rand() % 6 + 1;
        totalPuntos += dado1 + dado2;
        cout << "Lanzamiento " << i << ": dado1=" << dado1 << ", dado2=" << dado2 << endl;
    }

    cout << "Total de puntos obtenidos: " << totalPuntos << endl;

    return 0;
}



