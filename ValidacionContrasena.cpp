#include <iostream>
#include <string>
using namespace std; int main(){string s; cin>>s; if(s.length()>=6 && s.length()<=10 && s.find("!")!=string::npos) cout<<"Valida"<<endl; else cout<<"Invalida"<<endl; return 0;}