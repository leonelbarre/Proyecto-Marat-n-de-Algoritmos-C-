#include <iostream> 
using namespace std;
int main() {
    int op; 
    float d;
    cout << "1. Metros a Kilometros\n2. Kilometros a Metros\nOpcion: ";
    cin >> op;
    cout << "Ingrese la distancia: ";
    cin >> d;
    cout << "Resultado: " << (op == 1 ? d/1000 : op == 2 ? d*1000 : 0)
         << (op == 1 ? " km" : op == 2 ? " m" : " (Opcion invalida)");
    return 0;
}






