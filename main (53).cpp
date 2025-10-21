#include <iostream>
using namespace std;

#define MAX 5
int cola[MAX];
int frente = -1;
int final = -1;

bool is_empty() {
    return frente == -1;
}

bool is_full() {
    return (final + 1) % MAX == frente;
}

void enqueue(int valor) {
    if (is_full()) {
        cout << "Error: Cola llena (overflow)." << endl;
        return;
    }
    if (is_empty()) frente = 0;
    final = (final + 1) % MAX;
    cola[final] = valor;
    cout << "Elemento insertado: " << valor << endl;
}

int dequeue() {
    if (is_empty()) {
        cout << "Error: Cola vacía (underflow)." << endl;
        return -1;
    }
    int valor = cola[frente];
    if (frente == final) { // Último elemento eliminado
        frente = -1;
        final = -1;
    } else {
        frente = (frente + 1) % MAX;
    }
    cout << "Elemento eliminado: " << valor << endl;
    return valor;
}

void mostrar_cola() {
    if (is_empty()) {
        cout << "Cola vacía." << endl;
        return;
    }
    cout << "Cola: ";
    int i = frente;
    while (true) {
        cout << cola[i] << " ";
        if (i == final) break;
        i = (i + 1) % MAX;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    mostrar_cola();
    int eliminado = dequeue();
    cout << "Valor retornado por dequeue(): " << eliminado << endl;
    mostrar_cola();
    return 0;
}