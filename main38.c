#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numClientes, totalProductos = 0;

    cout << "Ingrese el numero de clientes: ";
    cin >> numClientes;

    for(int i = 1; i <= numClientes; i++) {
        int productos = rand() % 5 + 1; // Entre 1 y 5 productos
        totalProductos += productos;
        cout << "Cliente " << i << " compro " << productos << " productos." << endl;
    }

    cout << "Total de clientes: " << numClientes << endl;
    cout << "Total de productos vendidos: " << totalProductos << endl;

    return 0;
}





