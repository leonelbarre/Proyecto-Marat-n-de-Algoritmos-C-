#include <iostream>
using namespace std;

int main() {
    int horas;
    float pago, total;
    cout << "Horas trabajadas: ";
    cin >> horas;
    cout << "Pago por hora: ";
    cin >> pago;

    if (horas <= 40)
        total = horas * pago;
    else
        total = (40 * pago) + ((horas - 40) * pago * 1.5);

    cout << "El salario semanal es: $" << total;

    return 0;
}
