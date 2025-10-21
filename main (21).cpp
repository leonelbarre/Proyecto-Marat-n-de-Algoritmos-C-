/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);
    for (int i = texto.length() - 1; i >= 0; i--)
        cout << texto[i];
    cout << endl;
    return 0;
}








