#include <iostream>
using namespace std;

class Contador {
private:
    int valor;
public:
    Contador() {
        valor = 0;
    }

    void incrementar() {
        valor++;
    }

    void decrementar() {
        valor--;
    }

    void resetear() {
        valor = 0;
    }

    void mostrar() {
        cout << "Valor actual del contador: " << valor << endl;
    }
};

int main() {
    Contador c;
    int opcion;
    
    do {
        cout << "\nSelecciona una opción:\n";
        cout << "1. Incrementar\n2. Decrementar\n3. Resetear\n4. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                c.incrementar();
                c.mostrar();
                break;
            case 2:
                c.decrementar();
                c.mostrar();
                break;
            case 3:
                c.resetear();
                c.mostrar();
                break;
            case 4:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción inválida." << endl;
        }
    } while(opcion != 4);

    return 0;
}