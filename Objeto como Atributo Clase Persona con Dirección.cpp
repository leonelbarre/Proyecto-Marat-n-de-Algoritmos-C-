#include <iostream>
using namespace std;

class Direccion {
public:
    string calle;
    string ciudad;
    string codigo_postal;

    void mostrar() {
        cout << "Calle: " << calle << ", Ciudad: " << ciudad 
             << ", Codigo Postal: " << codigo_postal << endl;
    }
};

class Persona {
private:
    string nombre;
    int edad;
    Direccion direccion;

public:
    Persona(string n, int e, Direccion d) {
        nombre = n;
        edad = e;
        direccion = d;
    }

    void mostrar() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        direccion.mostrar();
    }
};

int main() {
    string nombre, calle, ciudad, codigo;
    int edad;

    cout << "Ingrese nombre: ";
    cin >> nombre;
    cout << "Ingrese edad: ";
    cin >> edad;
    cout << "Ingrese calle: ";
    cin >> calle;
    cout << "Ingrese ciudad: ";
    cin >> ciudad;
    cout << "Ingrese codigo postal: ";
    cin >> codigo;

    Direccion d = {calle, ciudad, codigo};
    Persona p(nombre, edad, d);

    cout << "\nDatos de la Persona:\n";
    p.mostrar();

    return 0;
}