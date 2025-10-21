#include <iostream>
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    int ID;
    int nota;

public:
    // Constructor
    Estudiante(string n, int id, int nt) {
        nombre = n;
        ID = id;
        nota = nt;
    }

    bool esta_aprobado() {
        return nota >= 50;
    }

    void mostrarResultado() {
        if (esta_aprobado()) {
            cout << "El estudiante " << nombre << " está APROBADO." << endl;
        } else {
            cout << "El estudiante " << nombre << " está REPROBADO." << endl;
        }
    }
};

int main() {
    string nombre;
    int ID, nota;

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);
    cout << "Ingrese el ID del estudiante: ";
    cin >> ID;
    cout << "Ingrese la nota del estudiante: ";
    cin >> nota;

    Estudiante e(nombre, ID, nota);
    e.mostrarResultado();

    return 0;
}