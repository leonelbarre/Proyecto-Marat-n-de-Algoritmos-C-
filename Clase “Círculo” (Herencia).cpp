#include <iostream>
#include <cmath>
using namespace std;

class Forma {
public:
    virtual double calcular_area() {
        cout << "El método calcular_area() debe ser implementado por una subclase." << endl;
        return 0;
    }

    virtual void mostrar_tipo() {
        cout << "Soy una forma geométrica genérica." << endl;
    }
};

class Circulo : public Forma {
private:
    double radio;

public:
    Circulo(double r) {
        radio = r;
    }

    double calcular_area() override {
        return M_PI * radio * radio;
    }

    void mostrar_tipo() override {
        cout << "Soy un círculo con radio = " << radio << endl;
    }
};

int main() {
    Circulo c(5.0);
    c.mostrar_tipo();
    cout << "Área del círculo: " << c.calcular_area() << endl;
    return 0;
}

