#include <iostream>
 using namespace std;
class SerVivo {
 protected:
 int energia;
 public:
 SerVivo(int e=100) : energia(e) {}
 virtual void alimentarse() = 0;
 };
class Animal : public SerVivo {
 public:
 void alimentarse() override {
 energia += 10;
 cout << "Animal se alimenta. Energía: " << energia << endl;
 }
 };
class Planta : public SerVivo {
 public:
 void alimentarse() override {
 energia += 5;
 cout << "Planta realiza fotosíntesis. Energía: " << energia << endl;
 }
 };
int main() {
 Animal a;
 Planta p;
 a.alimentarse();
 p.alimentarse();
 return 0;
 }