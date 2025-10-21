#include <iostream>
using namespace std;

int main() {
    int opcion;
    float dolares, resultado;
    bool continuar = true;

    while (continuar) {
        cout << "\n--- CONVERSOR DE MONEDAS ---" << endl;
        cout << "1. Dólar a Euro" << endl;
        cout << "2. Dólar a Peso Mexicano" << endl;
        cout << "3. Dólar a Yen Japonés" << endl;
        cout << "4. Dólar a Sol Peruano" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        if (opcion == 5) {
            cout << "Saliendo del programa..." << endl;
            break;
        }

        cout << "Ingrese la cantidad en dólares: $";
        cin >> dolares;

        switch (opcion) {
            case 1:
                resultado = dolares * 0.92; // tasa dólar a euro
                cout << "Equivalente en Euros: €" << resultado << endl;
                break;
            case 2:
                resultado = dolares * 18.10; // tasa dólar a pesos MXN
                cout << "Equivalente en Pesos Mexicanos: $" << resultado << " MXN" << endl;
                break;
            case 3:
                resultado = dolares * 147.5; // tasa dólar a yenes
                cout << "Equivalente en Yenes Japoneses: ¥" << resultado << endl;
                break;
            case 4:
                resultado = dolares * 3.80; // tasa dólar a soles
                cout << "Equivalente en Soles Peruanos: S/." << resultado << endl;
                break;
            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
        }
    }

    return 0;
}

