#include <iostream>
#include <vector>
using namespace std;

class SerVivo {
protected:
    int energia;
public:
    SerVivo() : energia(0) {}
    virtual void alimentarse() = 0;
    int getEnergia() { return energia; }
};

class Animal : public SerVivo {
public:
    void alimentarse() override {
        energia += 10;
        cout << "El animal se alimenta y su energía es: " << energia << endl;
    }
};

class Planta : public SerVivo {
public:
    void alimentarse() override {
        energia += 5;
        cout << "La planta realiza fotosíntesis y su energía es: " << energia << endl;
    }
};

int main() {
    vector<SerVivo*> seres;
    Animal a;
    Planta p;
    seres.push_back(&a);
    seres.push_back(&p);

    for(auto s : seres) {
        s->alimentarse();
    }

    return 0;
}
