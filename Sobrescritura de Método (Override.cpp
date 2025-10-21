#include <iostream>
#include <string>
using namespace std;

class Empleado {
protected:
    string nombre;
    double salario;
public:
    Empleado(string n="", double s=0) : nombre(n), salario(s) {}
    virtual double calcular_salario_neto(){ return salario; }
};

class Gerente : public Empleado {
private:
    double bono;
public:
    Gerente(string n,double s,double b) : Empleado(n,s), bono(b) {}
    double calcular_salario_neto() override{
        return salario + bono;
    }
};

int main(){
    Gerente g("Carlos",4000,500);
    cout<<"Salario neto de "<<g.calcular_salario_neto()<<endl;
    return 0;
}
