
#include <iostream>
#include <string>
using namespace std;

class Gato {
private:
    string nombre;
    int salud;

public:
    Gato(string n, int s) {
        nombre = n;
        salud = s;
    }

    void comer() {
        salud += 10; // Incrementa la salud en 10
    }

    void mostrar_salud() {
        cout << "Salud de " << nombre << ": " << salud << endl;
    }
};

int main() {
    string nombre_gato;
    int salud_inicial;

    cout << "Ingrese el nombre del gato: ";
    cin >> nombre_gato;
    cout << "Ingrese la salud inicial del gato: ";
    cin >> salud_inicial;

    Gato miGato(nombre_gato, salud_inicial);
    miGato.comer();
    miGato.mostrar_salud();

    return 0;
}