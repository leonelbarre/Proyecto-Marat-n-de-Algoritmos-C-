#include <iostream>
using namespace std;

int main() {
    double nota1, nota2, nota3, promedio;

    // 1. Pedir notas
    cout << "Ingresa la primera nota: ";
    cin >> nota1;
    cout << "Ingresa la segunda nota: ";
    cin >> nota2;
    cout << "Ingresa la tercera nota: ";
    cin >> nota3;

    // 2. Validar notas
    if (nota1 < 0 || nota1 > 100 || nota2 < 0 || nota2 > 100 || nota3 < 0 || nota3 > 100) {
        cout << "Error: Las notas deben estar entre 0 y 100." << endl;
        return 1;
    }

    // 3. Calcular promedio
    promedio = (nota1 + nota2 + nota3) / 3;

    // 4. Mostrar promedio y resultado
    cout << "Promedio: " << promedio << endl;
    if (promedio >= 60)
        cout << "El estudiante aprueba." << endl;
    else
        cout << "El estudiante reprueba." << endl;

    return 0;
}
