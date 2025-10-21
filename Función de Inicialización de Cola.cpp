#include <iostream>
using namespace std;

#define MAX 10
int cola[MAX];
int frente, final;

void inicializar_cola() {
    frente = -1;
    final = -1;
    cout << "Cola inicializada correctamente." << endl;
}

int main() {
    inicializar_cola();
    cout << "Frente: " << frente << ", Final: " << final << endl;
    return 0;
}