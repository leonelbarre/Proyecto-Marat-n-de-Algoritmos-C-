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
    lista.imprimir_lista(); // 30 -> 20 -> 10 -> NULL
    return 0;
}

