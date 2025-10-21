#include <iostream>
using namespace std;
int main(){int N; cin>>N; for(int i=N,j=0;i>0;i--,j++) cout<<((j%2==0?i:-i+ j))<<" "; return 0;}