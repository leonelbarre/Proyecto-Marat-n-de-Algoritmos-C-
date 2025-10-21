/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <iostream>
using namespace std;

int main() {
    float precio, iva, total;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    cout << "Ingrese el porcentaje de IVA: ";
    cin >> iva;
    total = precio + (precio * iva / 100);
    cout << "Total a pagar con IVA: " << total << endl;
    return 0;
}


}
