#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    if(n < 1)
        cout << "Número inválido." << endl;
    else {
        cout << "Números pares hasta " << n << ": ";
        for(int i = 1; i <= n; i++) {
            if(i % 2 == 0)
                cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}



