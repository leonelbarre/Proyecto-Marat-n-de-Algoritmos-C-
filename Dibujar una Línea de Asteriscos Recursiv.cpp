#include <iostream>
using namespace std;

void dibujar_linea(int n){
    if(n==0) return;
    cout<<"*";
    dibujar_linea(n-1);
}

int main(){
    int N=10;
    dibujar_linea(N);
    cout<<endl;
    return 0;
}
