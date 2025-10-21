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
        setNota(nt); // Usar setter para validar
    }

    // Getter
    int getNota() {
        return nota;
    }

    // Setter con validación
    void setNota(int n) {
        if (n >= 0 && n <= 100) {
            nota = n;
        } else {
            cout << "Error: La nota debe estar entre 0 y 100." << endl;
            nota = 0; // Valor por defecto
        }
    }

    void mostrarInfo() {
        cout << "Nombre: " << nombre << ", ID: " << ID << ", Nota: " << nota << endl;
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
    e.mostrarInfo();

    return 0;
}