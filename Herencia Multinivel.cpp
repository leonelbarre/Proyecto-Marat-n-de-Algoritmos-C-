#include <iostream>
using namespace std;

class Vehiculo {
public:
    void mover() {
        cout << "El vehículo se mueve." << endl;
    }
};

class Coche : public Vehiculo {
public:
    void encender() {
        cout << "El coche ha sido encendido." << endl;
    }
};

class CocheElectrico : public Coche {
public:
    void cargar_bateria() {
        cout << "Cargando batería del coche eléctrico..." << endl;
    }
};

int main() {
    CocheElectrico tesla;
    tesla.encender();
    tesla.mover();
    tesla.cargar_bateria();
    return 0;
}
