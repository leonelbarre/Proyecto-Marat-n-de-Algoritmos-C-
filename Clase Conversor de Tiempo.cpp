#include <iostream>
using namespace std;

class ConversorTiempo {
private:
    double unidad_base; // en segundos
public:
    ConversorTiempo(double segundos) : unidad_base(segundos) {}

    double a_minutos() { return unidad_base / 60; }
    double a_horas() { return unidad_base / 3600; }
    double a_dias() { return unidad_base / 86400; }
};

int main() {
    ConversorTiempo ct(7200); // 7200 segundos

    cout << "Minutos: " << ct.a_minutos() << endl;
    cout << "Horas: " << ct.a_horas() << endl;
    cout << "Días: " << ct.a_dias() << endl;

    return 0;
}
