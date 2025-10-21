#include <iostream>
using namespace std;

int main() {
    float nota;

    cout << "Ingrese la nota del estudiante (0 - 100): ";
    cin >> nota;

    if (nota >= 90 && nota <= 100)
        cout << "Calificación: A" << endl;
    else if (nota >= 80)
        cout << "Calificación: B" << endl;
    else if (nota >= 70)
        cout << "Calificación: C" << endl;
    else if (nota >= 60)
        cout << "Calificación: D" << endl;
    else
        cout << "Calificación: F" << endl;

    return 0;
}

