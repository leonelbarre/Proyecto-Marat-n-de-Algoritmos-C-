#include <iostream>
using namespace std;

int main(){
    int R=2, C=3;
    int* mat = new int[R*C];

    int val=1;
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            *(mat + i*C + j) = val++;

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++) cout<<*(mat + i*C + j)<<" ";
        cout<<endl;
    }

    delete[] mat;
    return 0;
}
