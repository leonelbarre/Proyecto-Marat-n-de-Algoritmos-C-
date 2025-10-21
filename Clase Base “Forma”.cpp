#include <iostream>
#include <string>
using namespace std;

class Forma {
public:
    virtual double calcular_area() {
        cout << "El método calcular_area() debe ser implementado por una subclase." << endl;
        return 0;
    }

    void mostrar_tipo() {
        cout << "Soy una forma geométrica genérica." << endl;
    }
};

int main() {
    Forma f;
    f.mostrar_tipo();
    f.calcular_area();
    return 0;
}
