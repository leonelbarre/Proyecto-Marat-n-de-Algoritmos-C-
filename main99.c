#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int octal, decimal=0, i=0, digito;
    cout << "Ingrese un número octal: ";
    cin >> octal;
    int num = octal;

    while(num != 0) {
        digito = num % 10;
        decimal += digito * pow(8,i);
        num /= 10;
        i++;
    }

    cout << "Número decimal equivalente: " << decimal << endl;
    return 0;
}
