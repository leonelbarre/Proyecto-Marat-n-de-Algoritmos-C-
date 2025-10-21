/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int totalSeg, horas, minutos, segundos;
    cout << "Ingrese los segundos totales: ";
    cin >> totalSeg;
    horas = totalSeg / 3600;
    minutos = (totalSeg % 3600) / 60;
    segundos = totalSeg % 60;
    cout << horas << "h " << minutos << "m " << segundos << "s" << endl;
    return 0;
}

