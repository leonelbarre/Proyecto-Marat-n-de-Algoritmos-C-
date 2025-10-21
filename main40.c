#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    string climas[] = {"Soleado", "Lluvioso", "Nublado", "Tormenta"};

    for(int i = 1; i <= 7; i++) {
        int indice = rand() % 4;
        cout << "Dia " << i << ": " << climas[indice] << endl;
    }

    return 0;
}


