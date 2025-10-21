#include <iostream>
using namespace std;
int main(){int n; cin>>n; string s=to_string(n); for(char c:s) if((c-'0')%2==1){ cout<<c<<endl; break;} return 0;}