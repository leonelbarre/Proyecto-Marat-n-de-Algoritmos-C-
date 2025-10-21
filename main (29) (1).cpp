#include <iostream>
#include <string>
using namespace std;

class Empleado {
protected:
    string nombre;
    double salario;
public:
    Empleado(string n="", double s=0) : nombre(n), salario(s) {}
    virtual void mostrar_info(){
        cout<<"Nombre: "<<nombre<<"\nSalario: "<<salario<<endl;
    }
};

class Gerente : public Empleado {
private:
    string departamento;
public:
    Gerente(string n, double s, string d) : Empleado(n,s), departamento(d) {}
    void mostrar_info() override{
        cout<<"Nombre: "<<nombre<<"\nSalario: "<<salario<<"\nDepartamento: "<<departamento<<endl;
    }
};

int main(){
    Gerente g("Ana",5000,"Ventas");
    g.mostrar_info();
    return 0;
}
