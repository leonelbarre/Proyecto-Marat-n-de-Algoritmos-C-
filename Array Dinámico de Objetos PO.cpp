#include <iostream>
#include <string>
using namespace std;

class Persona {
public:
    string nombre;
    int edad;
    Persona(string n="", int e=0):nombre(n),edad(e){}
    void mostrar(){ cout<<nombre<<" - "<<edad<<endl; }
};

int main(){
    int N=3;
    Persona* personas = new Persona[N];
    personas[0] = Persona("Ana",20);
    personas[1] = Persona("Luis",25);
    personas[2] = Persona("Maria",22);

    for(int i=0;i<N;i++) personas[i].mostrar();

    delete[] personas;
    return 0;
}

