/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
using namespace std;

int main() {
    float dolares, tasa, euros;
    cout << "Ingrese cantidad en dólares: ";
    cin >> dolares;
    cout << "Ingrese la tasa de cambio (1 dólar = ? euros): ";
    cin >> tasa;
    euros = dolares * tasa;
    cout << "Equivalente en euros: " << euros << endl;
    return 0;
}
