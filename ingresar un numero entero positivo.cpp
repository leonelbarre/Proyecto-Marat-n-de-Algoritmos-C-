#include <iostream>
using namespace std;
int main() {
    int n;
    unsigned long long factorial = 1;
    cout << "Ingrese un número entero positivo: ";
    cin >> n;
    if(n < 0) {
       cout << "Error: El número debe ser positivo." << endl;
       return 1;
    }
    for(int i = 1; i <= n; i++)
        factorial *= i;
    cout << "El factorial de " << n << " es: " << factorial << endl;
    return 0;
}










