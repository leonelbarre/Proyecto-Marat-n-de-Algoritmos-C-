#include <iostream>
#include <string>
using namespace std;

class CuentaBancaria {
public:
    int numero;
    double saldo;
    CuentaBancaria(int n=0,double s=0):numero(n),saldo(s){}
    void mostrar(){ cout<<"Cuenta: "<<numero<<" Saldo: "<<saldo<<endl; }
};

class Banco {
private:
    CuentaBancaria cuentas[10];
    int tope=0;
public:
    void agregar(CuentaBancaria c){ cuentas[tope++]=c; }
    void mostrar_cuentas(){
        for(int i=0;i<tope;i++) cuentas[i].mostrar();
    }
};

int main(){
    Banco b;
    b.agregar(CuentaBancaria(123,500));
    b.agregar(CuentaBancaria(456,1000));
    b.mostrar_cuentas();
    return 0;
}

