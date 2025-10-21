#include <iostream>
using namespace std;

class Coche {
public:
    virtual void encender() { cout << "Coche encendido." << endl; }
};

class CocheElectrico : public Coche {
public:
    void cargar_bateria() final {
        cout << "Cargando batería (método final)." << endl;
    }
};
