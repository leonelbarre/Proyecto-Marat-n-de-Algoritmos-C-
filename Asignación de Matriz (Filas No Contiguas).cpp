#include <iostream>
using namespace std;

int main(){
    int R=2, C=3;
    int** mat = new int*[R];
    for(int i=0;i<R;i++) mat[i] = new int[C];

    int val=1;
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            mat[i][j]=val++;

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++) cout<<mat[i][j]<<" ";
        cout<<endl;
    }

    for(int i=0;i<R;i++) delete[] mat[i];
    delete[] mat;
    return 0;
}
