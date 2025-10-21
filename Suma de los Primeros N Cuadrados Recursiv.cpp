#include <iostream>
using namespace std;

int suma_cuadrados(int n){
    if(n==1) return 1;
    return n*n + suma_cuadrados(n-1);
}

int main(){
    int N=5;
    cout<<"Suma de los primeros "<<N<<" cuadrados: "<<suma_cuadrados(N)<<endl;
    return 0;
}
