#include <iostream>
using namespace std;
int main() {
    double num1, num2, num3, promedio;
    // 1. Solicitar los tres números
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    // 2. Calcular el promedio
    promedio = (num1 + num2 + num3) / 3.0;

    // 3. Mostrar el resultado
    cout << "El promedio de los tres numeros es: " << promedio << endl;
    return 0;
}








