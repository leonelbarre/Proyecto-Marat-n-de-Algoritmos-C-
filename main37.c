#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    string caracteres = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string contrasena = "";

    for(int i = 0; i < 8; i++) {
        int indice = rand() % caracteres.length();
        contrasena += caracteres[indice];
    }

    cout << "Contraseña generada: " << contrasena << endl;
    return 0;
}





