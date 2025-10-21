#include <iostream>
using namespace std;

int minimo(int a, int b, int c) {
    if(a <= b && a <= c) return a;
    else if(b <= a && b <= c) return b;
    else return c;
}

int main() {
    int x, y, z;
    cout << "Ingrese tres números: ";
    cin >> x >> y >> z;

    cout << "El número mínimo es: " << minimo(x,y,z) << endl;
    return 0;
}

