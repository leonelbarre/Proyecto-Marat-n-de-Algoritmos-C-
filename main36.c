#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numero = rand() % 10 + 1;
    cout << "Tabla de multiplicar del numero: " << numero << endl;

    for(int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero*i << endl;
    }

    return 0;
}



