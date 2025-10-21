#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX_ESTUDIANTES = 100;
    string nombres[MAX_ESTUDIANTES];
    float notas[MAX_ESTUDIANTES];
    int totalEstudiantes = 0;
    int opcion;

    do {
        cout << "\n=== MENU DE ESTUDIANTES ===" << endl;
        cout << "1. Agregar estudiante" << endl;
        cout << "2. Mostrar estudiantes y notas" << endl;
        cout << "3. Mostrar promedio general" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore(); // limpiar buffer para getline

        switch(opcion) {
            case 1:
                if(totalEstudiantes < MAX_ESTUDIANTES) {
                    cout << "Ingrese el nombre del estudiante: ";
                    getline(cin, nombres[totalEstudiantes]);
                    cout << "Ingrese la nota (0-10): ";
                    cin >> notas[totalEstudiantes];
                    totalEstudiantes++;
                    cout << "Estudiante agregado correctamente!" << endl;
                } else {
                    cout << "No se pueden agregar más estudiantes." << endl;
                }
                break;
            case 2:
                cout << "\n--- LISTA DE ESTUDIANTES ---" << endl;
                for(int i = 0; i < totalEstudiantes; i++) {
                    cout << i+1 << ". " << nombres[i] << " - Nota: " << notas[i] << endl;
                }
                if(totalEstudiantes == 0) cout << "No hay estudiantes registrados." << endl;
                break;
            case 3:
                if(totalEstudiantes > 0) {
                    float suma = 0;
                    for(int i = 0; i < totalEstudiantes; i++) suma += notas[i];
                    cout << "Promedio general: " << (suma / totalEstudiantes) << endl;
                } else {
                    cout << "No hay estudiantes para calcular promedio." << endl;
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


