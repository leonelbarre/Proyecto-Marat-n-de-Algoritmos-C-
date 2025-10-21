#include <iostream>

class Rectangulo {
private:
    double base;
    double altura;

public:
    // Constructor
    Rectangulo(double b, double h) {
        base = b;
        altura = h;
    }

    double calcularArea() {
        return base * altura;
    }

    double calcularPerimetro() {
        return 2 * (base + altura);
    }
};

int main() {
    double base, altura;
    std::cout << "Ingrese la base del rectángulo: ";
    std::cin >> base;
    std::cout << "Ingrese la altura del rectángulo: ";
    std::cin >> altura;

    Rectangulo r(base, altura);

    std::cout << "Área del rectángulo: " << r.calcularArea() << std::endl;
    std::cout << "Perímetro del rectángulo: " << r.calcularPerimetro() << std::endl;

    return 0;
}