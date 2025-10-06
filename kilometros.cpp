#include <iostream>
using namespace std;
int main() {
    // Declaración de variables
    double altura, peso, imc;
    // Entrada de datos
    cout << "Ingrese su altura en metros: ";
    cin >> altura;
    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;
    // Cálculo del IMC
    imc = peso / (altura * altura);
    // Mostrar resultado
    cout << "Su índice de masa corporal (IMC) es: " << imc << endl;
    // Determinar categoría
    if (imc < 18.5) {
        cout << "Categoría: Bajo peso" << endl;
    } else if (imc < 25) {
        cout << "Categoría: Normal" << endl;
    } else if (imc < 30) {
        cout << "Categoría: Sobrepeso" << endl;
    } else {
        cout << "Categoría: Obesidad" << endl;
    }
    return 0;
}







