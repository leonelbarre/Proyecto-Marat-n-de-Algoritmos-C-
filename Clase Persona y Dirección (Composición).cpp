#include <iostream>
#include <string>
using namespace std;

class Direccion {
public:
    string calle;
    string ciudad;

    Direccion(string c, string ci) : calle(c), ciudad(ci) {}
};

class Persona {
private:
    string nombre;
    Direccion direccion;
public:
    Persona(string n, Direccion d) : nombre(n), direccion(d) {}

    void mostrar_datos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Direccion: " << direccion.calle << ", " << direccion.ciudad << endl;
    }
};

int main() {
    Direccion d("Av. Libertad", "Guayaquil");
    Persona p("Junior Zapata", d);
    p.mostrar_datos();
    return 0;
}