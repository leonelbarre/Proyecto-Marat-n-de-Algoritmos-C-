#include <iostream>
using namespace std;

#define MAX 10
int cola[MAX];
int tamaño = 0;

void insertar_prioridad(int valor) {
    if (tamaño == MAX) {
        cout << "Cola llena, no se puede insertar." << endl;
        return;
    }
    int i = tamaño - 1;
    while (i >= 0 && cola[i] > valor) {
        cola[i + 1] = cola[i];
        i--;
    }
    cola[i + 1] = valor;
    tamaño++;
}

int extraer_prioridad() {
    if (tamaño == 0) {
        cout << "Cola vacía, nada que extraer." << endl;
        return -1;
    }
    int valor = cola[0];
    for (int i = 0; i < tamaño - 1; i++) {
        cola[i] = cola[i + 1];
    }
    tamaño--;
    return valor;
}

int main() {
    insertar_prioridad(5);
    insertar_prioridad(2);
    insertar_prioridad(8);
    cout << "Extraído: " << extraer_prioridad() << endl; // Debe extraer 2
    cout << "Extraído: " << extraer_prioridad() << endl; // Debe extraer 5
    return 0;
}