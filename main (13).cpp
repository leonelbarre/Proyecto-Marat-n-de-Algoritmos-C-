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
    int consonantes = 0;
    cout << "Ingrese una palabra: ";
    cin >> palabra;
    for (char c : palabra) {
        c = tolower(c);
        if ((c >= 'a' && c <= 'z') && !(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'))
            consonantes++;
    }
    cout << "Cantidad de consonantes: " << consonantes << endl;
    return 0;
}



