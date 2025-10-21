#include <iostream>
#include <string>

class Coche {
private:
    std::string modelo;
    int anio;
    int velocidad;

public:
    // Constructor
    Coche(std::string m, int a) {
        modelo = m;
        anio = a;
        velocidad = 0;
        std::cout << "Objeto Coche creado: " << modelo << " - " << anio << std::endl;
    }

    // Destructor
    ~Coche() {
        std::cout << "Objeto Coche destruido: " << modelo << " - " << anio << std::endl;
    }

    void acelerar() {
        velocidad += 10;
    }