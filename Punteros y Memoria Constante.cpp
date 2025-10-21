#include <iostream>
using namespace std;

void mostrar_valor(const int* const ptr){
    cout<<"Valor: "<<*ptr<<endl;
}

int main(){
    int x=10;
    mostrar_valor(&x);
    return 0;
}
