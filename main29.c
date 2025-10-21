#include <iostream>
using namespace std;

int main() {
    double horas, tarifa, salario;

    cout << "Ingrese las horas trabajadas en la semana: ";
    cin >> horas;
    cout << "Ingrese el pago por hora: ";
    cin >> tarifa;

    if (horas > 40) {
        double horas_extra = horas - 40;
        salario = (40 * tarifa) + (horas_extra * tarifa * 1.5);
    } else {
        salario = horas * tarifa;
    }

    cout << "El salario total semanal es: $" << salario << endl;
    return 0;
}

