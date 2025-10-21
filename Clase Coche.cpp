#include <iostream>
#include <string>

class Coche {
private:
    std::string modelo;
    int anio;
    int velocidad;

public:
    Coche(std::string m, int a) {
        modelo = m;
        anio = a;
        velocidad = 0;
    }

    void acelerar() {
        velocidad += 10;
    }

    void frenar() {
        if (velocidad >= 10)
            velocidad -= 10;
        else
            velocidad = 0;
    }

    int obtener_velocidad() {
        return velocidad;
    }