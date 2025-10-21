#include <iostream>
using namespace std;

int main() {
    double temperaturas[7], suma = 0, maxTemp, minTemp;

    for(int i = 0; i < 7; i++) {
        cout << "Ingrese la temperatura del dia " << i+1 << ": ";
        cin >> temperaturas[i];
    }

    maxTemp = minTemp = temperaturas[0];

    for(int i = 0; i < 7; i++) {
        suma += temperaturas[i];
        if(temperaturas[i] > maxTemp) maxTemp = temperaturas[i];
        if(temperaturas[i] < minTemp) minTemp = temperaturas[i];
    }

    cout << "Temperatura promedio: " << suma/7 << endl;
    cout << "Temperatura maxima: " << maxTemp << endl;
    cout << "Temperatura minima: " << minTemp << endl;

    return 0;
}




