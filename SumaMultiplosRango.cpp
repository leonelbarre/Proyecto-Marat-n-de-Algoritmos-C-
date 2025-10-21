#include <iostream>
using namespace std;
int main(){int a,b,sum=0; cin>>a>>b; for(int i=a+1;i<b;i++) if(i%3==0) sum+=i; cout<<sum<<endl; return 0;}