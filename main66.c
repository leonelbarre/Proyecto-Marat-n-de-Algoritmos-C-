#include <iostream>
using namespace std;

int main() {
    int dias, anios, meses, dias_restantes;

    cout << "Ingrese el número total de días: ";
    cin >> dias;

    anios = dias / 365;
    dias = dias % 365;
    meses = dias / 30;
    dias_restantes = dias % 30;

    cout << "Equivale a: " << anios << " años, " << meses << " meses y " << dias_restantes << " días." << endl;

    return 0;
}
