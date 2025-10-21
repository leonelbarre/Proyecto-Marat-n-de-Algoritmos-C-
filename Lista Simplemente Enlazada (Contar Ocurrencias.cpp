#include iostream
using namespace std;

struct Nodo {
    int valor;
    Nodo next;
    Nodo(int v)  valor(v), next(nullptr) {}
};

class ListaEnlazada {
public
    Nodo head;
    ListaEnlazada()  head(nullptr) {}

    void insertar_inicio(int valor) {
        Nodo nuevo = new Nodo(valor);
        nuevo-next = head;
        head = nuevo;
    }

    void concatenar(ListaEnlazada &otra) {
        if (!head) {
            head = otra.head;
            return;
        }
        Nodo actual = head;
        while (actual-next) actual = actual-next;
        actual-next = otra.head;
    }

    void imprimir_lista() {
        Nodo actual = head;
        while (actual) {
            cout  actual-valor   - ;
            actual = actual-next;
        }
        cout  NULL  endl;
    }
};

int main() {
    ListaEnlazada lista1, lista2;
    lista1.insertar_inicio(10);
    lista1.insertar_inicio(20);
    lista2.insertar_inicio(30);
    lista2.insertar_inicio(40);

    cout  Lista 1 inicial ;
    lista1.imprimir_lista();  20 - 10 - NULL
    cout  Lista 2 inicial ;
    lista2.imprimir_lista();  40 - 30 - NULL

    lista1.concatenar(lista2);
    cout  Lista concatenada ;
    lista1.imprimir_lista();  20 - 10 - 40 - 30 - NULL

    return 0;
}
