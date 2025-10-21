#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuarioCorrecto = "admin";
    string contrasenaCorrecta = "1234";
    string usuarioIngresado, contrasenaIngresada;

    // 1. Entrada de datos
    cout << "Ingrese el usuario: ";
    cin >> usuarioIngresado;
    cout << "Ingrese la contraseña: ";
    cin >> contrasenaIngresada;

    // 2. Validación de credenciales
    if(usuarioIngresado == usuarioCorrecto && contrasenaIngresada == contrasenaCorrecta) {
        cout << "Acceso permitido." << endl;
    } else {
        cout << "Acceso denegado." << endl;
    }

    return 0;
}

