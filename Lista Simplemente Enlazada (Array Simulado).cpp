#include <iostream>
using namespace std;

#define MAX 10
int datos[MAX];
int siguiente[MAX];
int inicio = -1;
int libre = 0;

void inicializar_lista() {
    for (int i = 0; i < MAX-1; i++) {
        siguiente[i] = i+1;
    }
    siguiente[MAX-1] = -1;
}

void insertar(int valor) {
    if (libre == -1) {
        cout << "Error: Lista llena." << endl;
        return;
    }
    int nuevo = libre;
    libre = siguiente[libre];
    datos[nuevo] = valor;
    siguiente[nuevo] = inicio;
    inicio = nuevo;
    cout << "Elemento insertado: " << valor << endl;
}

void eliminar(int valor) {
    if (inicio == -1) {
        cout << "Error: Lista vacía." << endl;
        return;
    }
    int actual = inicio;
    int anterior = -1;
    while (actual != -1 && datos[actual] != valor) {
        anterior = actual;
        actual = siguiente[actual];
    }
    if (actual == -1) {
        cout << "Elemento no encontrado: " << valor << endl;
        return;
    }
    if (anterior == -1) {
        inicio = siguiente[actual];
    } else {
        siguiente[anterior] = siguiente[actual];
    }
    siguiente[actual] = libre;
    libre = actual;
    cout << "Elemento eliminado: " << valor << endl;
}

void mostrar_lista() {
    if (inicio == -1) {
        cout << "Lista vacía." << endl;
        return;
    }
    cout << "Elementos de la lista: ";
    int actual = inicio;
    while (actual != -1) {
        cout << datos[actual] << " ";
        actual = siguiente[actual];
    }
    cout << endl;
}

int main() {
    inicializar_lista();
    insertar(10);
    insertar(20);
    insertar(30);
    mostrar_lista();

    eliminar(20);
    mostrar_lista();

    eliminar(40); // No existe
    mostrar_lista();

    return 0;
}