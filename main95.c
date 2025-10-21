#include <iostream>
using namespace std;

int main() {
    int nacimiento, edad, anioActual=2025;
    cout << "Ingrese su año de nacimiento: ";
    cin >> nacimiento;

    edad = anioActual - nacimiento;
    cout << "Su edad aproximada es: " << edad << " años." << endl;
    return 0;
}

