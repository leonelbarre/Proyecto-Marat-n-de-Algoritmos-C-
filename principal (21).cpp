#include <iostream>
using namespace std;

int main() {
    int opcion, producto, cantidad;
    double total = 0;

    do {
        cout << "\n--- TIENDA VIRTUAL ---" << endl;
        cout << "1. Mostrar productos" << endl;
        cout << "2. Agregar producto al carrito" << endl;
        cout << "3. Ver total de la compra" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nProductos disponibles:" << endl;
                cout << "1. Camiseta - $15.00" << endl;
                cout << "2. Pantalón - $25.00" << endl;
                cout << "3. Zapatos - $40.00" << endl;
                break;

            case 2:
                cout << "Ingrese el número del producto: ";
                cin >> producto;
                cout << "Ingrese la cantidad: ";
                cin >> cantidad;

                switch (producto) {
                    case 1:
                        total += 15 * cantidad;
                        cout << cantidad << " Camiseta(s) agregada(s)." << endl;
                        break;
                    case 2:
                        total += 25 * cantidad;
                        cout << cantidad << " Pantalon(es) agregado(s)." << endl;
                        break;
                    case 3:
                        total += 40 * cantidad;
                        cout << cantidad << " Par(es) de Zapatos agregado(s)." << endl;
                        break;
                    default:
                        cout << "Producto no valido." << endl;
                }
                break;

            case 3:
                cout << "El total de su compra es: $" << total << endl;
                break;

            case 4:
                cout << "Gracias por visitar la tienda. ¡Vuelva pronto!" << endl;
                break;

            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }

    } while (opcion != 4);

    return 0;
}







