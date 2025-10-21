#include <iostream>
using namespace std;

void reemplazar(char* str, char oldChar, char newChar){
    if(*str=='\0') return;
    if(*str==oldChar) *str=newChar;
    reemplazar(str+1, oldChar, newChar);
}

int main(){
    char texto[]="hola mundo";
    reemplazar(texto,'o','x');
    cout<<texto<<endl;
    return 0;
}
