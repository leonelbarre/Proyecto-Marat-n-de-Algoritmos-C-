#include <iostream>
#include <string>
using namespace std;

#define MAX 5
string cola[MAX];
int frente = -1;
int final = -1;

bool is_empty() {
    return frente == -1;
}

bool is_full() {
    return (final + 1) % MAX == frente;
}

void enqueue(string tarea) {
    if (is_full()) {
        cout << "Error: Cola llena (overflow)." << endl;
        return;
    }
    if (is_empty()) frente = 0;
    final = (final + 1) % MAX;
    cola[final] = tarea;
    cout << "Tarea agregada: " << tarea << endl;
}

string dequeue() {
    if (is_empty()) {
        cout << "Error: Cola vacía (underflow)." << endl;
        return "";
    }
    string tarea = cola[frente];
    if (frente == final) {
        frente = -1;
        final = -1;
    } else {
        frente = (frente + 1) % MAX;
    }
    cout << "Tarea ejecutada: " << tarea << endl;
    return tarea;
}

void mostrar_cola() {
    if (is_empty()) {
        cout << "Cola vacía." << endl;
        return;
    }
    cout << "Cola actual: ";
    int i = frente;
    while (true) {
        cout << cola[i] << " ";
        if (i == final) break;
        i = (i + 1) % MAX;
    }
    cout << endl;
}

int main() {
    enqueue("Tarea1");
    enqueue("Tarea2");
    enqueue("Tarea3");
    mostrar_cola();

    dequeue();
    mostrar_cola();

    enqueue("Tarea4");
    mostrar_cola();

    return 0;
}