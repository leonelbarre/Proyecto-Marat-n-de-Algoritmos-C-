#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    // 1. Solicitar los tres números
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;
    // 2. Determinar el mayor número
    if (a > b && a > c) {
        cout << "El numero mayor es: " << a << endl;
    } 
    else if (b > a && b > c) {
        cout << "El numero mayor es: " << b << endl;
    } 
    else if (c > a && c > b) {
        cout << "El numero mayor es: " << c << endl;
    } 
    else {
        cout << "Hay al menos dos numeros iguales y mayores." << endl;
    }
    return 0;
}








