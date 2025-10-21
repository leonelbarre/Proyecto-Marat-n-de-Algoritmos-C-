#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX_TAREAS = 100;
    string tareas[MAX_TAREAS];
    int totalTareas = 0;
    int opcion;
    
    do {
        cout << "\n=== MENU DE TAREAS ===" << endl;
        cout << "1. Agregar una tarea" << endl;
        cout << "2. Mostrar todas las tareas" << endl;
        cout << "3. Contar tareas" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore(); // Limpiar buffer para getline
        
        switch(opcion) {
            case 1:
                if(totalTareas < MAX_TAREAS) {
                    cout << "Ingrese la tarea: ";
                    getline(cin, tareas[totalTareas]);
                    totalTareas++;
                    cout << "Tarea agregada correctamente!" << endl;
                } else {
                    cout << "No se pueden agregar más tareas." << endl;
                }
                break;
            case 2:
                cout << "\n--- LISTA DE TAREAS ---" << endl;
                for(int i = 0; i < totalTareas; i++) {
                    cout << i+1 << ". " << tareas[i] << endl;
                }
                if(totalTareas == 0) cout << "No hay tareas registradas." << endl;
                break;
            case 3:
                cout << "Número total de tareas: " << totalTareas << endl;
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
