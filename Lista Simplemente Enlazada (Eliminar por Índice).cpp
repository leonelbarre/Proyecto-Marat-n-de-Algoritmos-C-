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

    void eliminar_por_indice(int indice) {
        if (!head) return;
        if (indice == 0) {
            Nodo* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Nodo* actual = head;
        for (int i = 0; actual && i < indice - 1; i++) {
            actual = actual->next;
        }
        if (!actual || !actual->next) return;
        Nodo* temp = actual->next;
        actual->next = actual->next->next;
        delete temp;
    }

    void imprimir_lista() {
        Nodo* actual = head;
        while (actual) {
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

    lista.eliminar_por_indice(1);
    lista.imprimir_lista(); // 30 -> 10 -> NULL

    return 0;
}
