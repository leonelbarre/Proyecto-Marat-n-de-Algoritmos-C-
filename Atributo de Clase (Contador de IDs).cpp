#include <iostream>
#include <string>
using namespace std;

class Producto {
private:
    string nombre;
    double precio;
    int id;
    static int proximo_id;
public:
    Producto(string n, double p) : nombre(n), precio(p) {
        id = proximo_id++;
    }

    void mostrar() {
        cout << "ID: " << id << ", Nombre: " << nombre << ", Precio: " << precio << endl;
    }
};

int Producto::proximo_id = 1;

int main() {
    Producto p1("Manzana", 0.5);
    Producto p2("Banana", 0.3);
    Producto p3("Naranja", 0.6);

    p1.mostrar();
    p2.mostrar();
    p3.mostrar();

    return 0;
}
