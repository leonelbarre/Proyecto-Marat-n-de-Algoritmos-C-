#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, temp;
    cout << "Ingrese el numero de terminos: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        temp = a + b;
        a = b;
        b = temp;
    }

    return 0;
}




