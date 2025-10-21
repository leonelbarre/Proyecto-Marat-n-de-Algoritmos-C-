#include <iostream>
using namespace std;

int main() {
    double B, b, h, area;
    cout << "Ingrese base mayor, base menor y altura: ";
    cin >> B >> b >> h;

    area = ((B+b)*h)/2;
    cout << "El área del trapecio es: " << area << endl;
    return 0;
}

