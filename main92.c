#include <iostream>
using namespace std;

int main() {
    int totalSeg, horas, min, seg;
    cout << "Ingrese los segundos: ";
    cin >> totalSeg;

    horas = totalSeg / 3600;
    min = (totalSeg % 3600) / 60;
    seg = totalSeg % 60;

    cout << horas << " horas, " << min << " minutos, " << seg << " segundos." << endl;
    return 0;
}

Pruebas
