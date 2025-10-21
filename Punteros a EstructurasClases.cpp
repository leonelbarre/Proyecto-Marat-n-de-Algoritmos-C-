#include <iostream>

struct Punto {
    int x;
    int y;
};

void duplicarCoordenadas(Punto* p) {
    p->x *= 2;
    p->y *= 2;
}

int main() {
    Punto p;
    std::cout << "Ingrese la coordenada x: ";
    std::cin >> p.x;
    std::cout << "Ingrese la coordenada y: ";
    std::cin >> p.y;

    std::cout << "Coordenadas originales: (" << p.x << ", " << p.y << ")" << std::endl;

    duplicarCoordenadas(&p);

    std::cout << "Coordenadas duplicadas: (" << p.x << ", " << p.y << ")" << std::endl;

    return 0;
}
