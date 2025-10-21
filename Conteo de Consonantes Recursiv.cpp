#include <iostream>
#include <cctype>
using namespace std;

bool es_consonante(char c){
    c=tolower(c);
    return (c>='a' && c<='z') && !(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int contar_consonantes(char* str){
    if(*str=='\0') return 0;
    return es_consonante(*str) + contar_consonantes(str+1);
}

int main(){
    char texto[]="Hola Mundo";
    cout<<"Consonantes: "<<contar_consonantes(texto)<<endl;
    return 0;
}
