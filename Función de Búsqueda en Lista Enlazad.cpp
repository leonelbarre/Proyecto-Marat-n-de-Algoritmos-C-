#include <iostream>
using namespace std;

struct Nodo {
    int valor;
    Nodo* next;
    Nodo(int v) : valor(v), next(nullptr) {}
};

class ListaEnlazada {
private:
    Nodo* head;

public:
    ListaEnlazada() : head(nullptr) {}

    void insertar_inicio(int valor) {
        Nodo* nuevo = new Nodo(valor);
        nuevo->next = head;
        head = nuevo;
    }

    bool buscar_lista(int valor) {
        Nodo* actual = head;
        while (actual != nullptr) {
            if (actual->valor == valor) return true;
            actual = actual->next;
        }
        return false;
    }

    void imprimir_lista() {
        Nodo* actual = head;
        while (actual != nullptr) {
            cout << actual->valor << " -> ";
            actual = actual->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    ListaEnlazada lista;
    lista.insertar_inicio(10);
    lista.insertar_inicio(20);
    lista.insertar_inicio(30);

    cout << "Buscando 20: " << (lista.buscar_lista(20) ? "Encontrado" : "No encontrado") << endl; // Encontrado
    cout << "Buscando 40: " << (lista.buscar_lista(40) ? "Encontrado" : "No encontrado") << endl; // No encontrado
    return 0;
}
