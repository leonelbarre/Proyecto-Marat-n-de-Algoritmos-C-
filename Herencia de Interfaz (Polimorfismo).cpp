#include <iostream>
using namespace std;

class Dibujable {
public:
    virtual void dibujar() = 0;
};

class Circulo : public Dibujable {
public:
    void dibujar() override {
        cout << "Dibujando un círculo" << endl;
    }
};

class Rectangulo : public Dibujable {
public:
    void dibujar() override {
        cout << "Dibujando un rectángulo" << endl;
    }
};

int main() {
    Circulo c;
    Rectangulo r;
    c.dibujar();
    r.dibujar();
    return 0;
}
