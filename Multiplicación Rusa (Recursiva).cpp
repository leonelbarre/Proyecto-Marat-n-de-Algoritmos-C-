#include <iostream>
using namespace std;

// Función recursiva para multiplicar usando el método ruso
int multiplicacionRusa(int a, int b) {
    if (b == 0)  // Caso base
        return 0;
    if (b % 2 == 0)
        return multiplicacionRusa(a * 2, b / 2);
    else
        return a + multiplicacionRusa(a * 2, b / 2);
}

int main() {
    int a, b;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;

    int resultado = multiplicacionRusa(a, b);
    cout << "El resultado de la multiplicación rusa es: " << resultado << endl;

    return 0;
}