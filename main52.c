#include <iostream>
using namespace std;

int main() {
    float num1, num2, division;

    cout << "Ingrese el dividendo: ";
    cin >> num1;
    cout << "Ingrese el divisor: ";
    cin >> num2;

    if (num2 == 0) {
        cout << "Error: no se puede dividir entre cero." << endl;
    } else {
        division = num1 / num2;
        cout << "El resultado de la división es: " << division << endl;
    }
    return 0;
}
