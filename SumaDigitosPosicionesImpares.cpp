#include <iostream>
using namespace std;
int main(){int n,sum=0,pos=1; cin>>n; while(n){ if(pos%2==1) sum+=n%10; n/=10; pos++;} cout<<sum<<endl; return 0;}