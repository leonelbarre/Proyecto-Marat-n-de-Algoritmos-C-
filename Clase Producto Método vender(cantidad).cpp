#include <iostream>
#include <string>
using namespace std;

class Producto {
private:
    string nombre;
    float precio;
    int stock;

public:
    // Constructor
    Producto(string n, float p, int s) {
        nombre = n;
        precio = p;
        stock = s;
    }

    // Método vender
    float vender(int cantidad) {
        if (cantidad <= stock) {
            stock -= cantidad;
            return cantidad * precio;
        } else {
            cout << "Error: Stock insuficiente." << endl;
            return 0;
        }
    }

    void mostrarInfo() {
        cout << "Producto: " << nombre << ", Precio: " << precio << ", Stock: " << stock << endl;
    }
};

int main() {
    string nombre;
    float precio;
    int stock, cantidad;

    cout << "Ingrese el nombre del producto: ";
    getline(cin, nombre);
    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    cout << "Ingrese el stock del producto: ";
    cin >> stock;

    Producto p(nombre, precio, stock);
    p.mostrarInfo();

    cout << "Ingrese la cantidad a vender: ";
    cin >> cantidad;

    float total = p.vender(cantidad);
    if (total > 0) {
        cout << "Costo total de la venta: " << total << endl;
    }

    p.mostrarInfo();

    return 0;
}
