#include <iostream>
using namespace std;
int main() {
    int n, suma = 0;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    if(n < 0) {
        cout << "Error: El numero debe ser positivo." << endl;
        return 1;
    }
    for(int i = 1; i <= n; i++) {
        int numero_par = 2 * i;
        suma += numero_par;
    }
    cout << "La suma de los primeros " << n << " numeros pares es: " << suma << endl;
    return 0;
}








