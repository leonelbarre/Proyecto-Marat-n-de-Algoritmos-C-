#include <iostream>
#include <cstring>
using namespace std;

int main(){
    const char* arr[3] = {"Hola","Mundo","C++"};
    char** copia = new char*[3];

    for(int i=0;i<3;i++){
        copia[i] = new char[strlen(arr[i])+1];
        strcpy(copia[i],arr[i]);
    }

    for(int i=0;i<3;i++) cout<<copia[i]<<endl;

    for(int i=0;i<3;i++) delete[] copia[i];
    delete[] copia;
    return 0;
}
