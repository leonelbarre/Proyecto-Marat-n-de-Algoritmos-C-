#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int hora1, min1, hora2, min2;

    // 1. Pedir primera hora
    cout << "Ingresa la primera hora (HH MM): ";
    cin >> hora1 >> min1;

    // 2. Pedir segunda hora
    cout << "Ingresa la segunda hora (HH MM): ";
    cin >> hora2 >> min2;

    // 3. Convertir a minutos totales
    int total1 = hora1 * 60 + min1;
    int total2 = hora2 * 60 + min2;

    // 4. Calcular diferencia
    int diferencia = abs(total2 - total1);

    // 5. Mostrar resultado
    cout << "La diferencia en minutos es: " << diferencia << " minutos" << endl;

    return 0;
}
