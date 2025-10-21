#include <iostream>
using namespace std;
int main() {
    float n;
    cout << "Ingrese un numero: ";
    cin >> n;
    if (n > 0)
        cout << "El numero es positivo." << endl;
    else if (n < 0)
        cout << "El numero es negativo." << endl;
    else
        cout << "El numero es cero." << endl;
    return 0;
}








