#include <iostream>
using namespace std;

class Temperatura {
private:
    double celsius;

public:
    // Constructor en Celsius
    Temperatura(double tempC, bool esCelsius) {
        if (esCelsius)
            celsius = tempC;
        else
            celsius = (tempC - 32) * 5 / 9; // Convertir de Fahrenheit a Celsius
    }

    double getCelsius() {
        return celsius;
    }

    double getFahrenheit() {
        return (celsius * 9 / 5) + 32;
    }
};

int main() {
    double temp;
    char tipo;
    cout << "Ingrese la temperatura: ";
    cin >> temp;
    cout << "Ingrese 'C' si es Celsius o 'F' si es Fahrenheit: ";
    cin >> tipo;

    Temperatura t(temp, tipo == 'C' || tipo == 'c');

    cout << "Temperatura en Celsius: " << t.getCelsius() << endl;
    cout << "Temperatura en Fahrenheit: " << t.getFahrenheit() << endl;

    return 0;
}