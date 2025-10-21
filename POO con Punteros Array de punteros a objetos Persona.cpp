#include <iostream>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;
public:
    Persona(string n, int e) {
        nombre = n;
        edad = e;
    }
    void mostrar() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};

int main() {
    const int N = 3;
    Persona* personas[N];

    // Inicializar punteros con objetos Persona
    personas[0] = new Persona("Juan", 25);
    personas[1] = new Persona("Ana", 30);
    personas[2] = new Persona("Carlos", 28);

    cout << "Datos de las personas:\n";
    for (int i = 0; i < N; ++i) {
        personas[i]->mostrar();
    }

    // Liberar memoria
    for (int i = 0; i < N; ++i) {
        delete personas[i];
    }

    return 0;
}