#include <iostream>
using namespace std; int main(){int n; cin>>n; string res; while(n){res=to_string(n%4)+res; n/=4;} cout<<res<<endl; return 0;}