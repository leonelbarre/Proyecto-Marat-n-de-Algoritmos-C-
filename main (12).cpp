/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    int contador = 0;
    cout << "Ingrese una palabra: ";
    cin >> palabra;
    for (char c : palabra) {
        c = tolower(c);
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            contador++;
    }
    cout << "Cantidad de vocales: " << contador << endl;
    return 0;
}


