#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX_PRODUCTOS = 100;
    string productos[MAX_PRODUCTOS];
    int cantidades[MAX_PRODUCTOS];
    int totalProductos = 0;
    int opcion;
    
    do {
        cout << "\n=== MENU DE INVENTARIO ===" << endl;
        cout << "1. Agregar producto" << endl;
        cout << "2. Mostrar productos" << endl;
        cout << "3. Actualizar cantidad de un producto" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore(); // Limpiar buffer para getline

        switch(opcion) {
            case 1:
                if(totalProductos < MAX_PRODUCTOS) {
                    cout << "Ingrese el nombre del producto: ";
                    getline(cin, productos[totalProductos]);
                    cout << "Ingrese la cantidad: ";
                    cin >> cantidades[totalProductos];
                    totalProductos++;
                    cout << "Producto agregado correctamente!" << endl;
                } else {
                    cout << "No se pueden agregar más productos." << endl;
                }
                break;
            case 2:
                cout << "\n--- LISTA DE PRODUCTOS ---" << endl;
                for(int i = 0; i < totalProductos; i++) {
                    cout << i+1 << ". " << productos[i] << " - Cantidad: " << cantidades[i] << endl;
                }
                if(totalProductos == 0) cout << "No hay productos registrados." << endl;
                break;
            case 3:
                if(totalProductos == 0) {
                    cout << "No hay productos para actualizar." << endl;
                    break;
                }
                {
                    string buscar;
                    cout << "Ingrese el nombre del producto a actualizar: ";
                    getline(cin, buscar);
                    bool encontrado = false;
                    for(int i = 0; i < totalProductos; i++) {
                        if(productos[i] == buscar) {
                            cout << "Ingrese la nueva cantidad: ";
                            cin >> cantidades[i];
                            cout << "Cantidad actualizada!" << endl;
                            encontrado = true;
                            break;
                        }
                    }
                    if(!encontrado) cout << "Producto no encontrado." << endl;
                }
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente nuevamente." << endl;
        }
    } while(opcion != 4);

    return 0;
}


