#include <iostream>
using namespace std;

char* strrchr_custom(char* str, char c){
    char* res = nullptr;
    while(*str){
        if(*str==c) res=str;
        str++;
    }
    return res;
}

int main(){
    char texto[]="programacion";
    char* p = strrchr_custom(texto,'a');
    if(p) cout<<"Ultima 'a' en: "<<p-texto<<endl;
    else cout<<"No encontrada"<<endl;
    return 0;
}
