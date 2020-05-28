#include<iostream>
using namespace std;
int main() {
    int i,j,k,rows=5;
    for (i=1; i<=rows; ++i) {
        for (j=1; j<=i; ++j)
        { cout<<j;
        for(k=rows-j;k>0;--k)
        {
            cout<<" ";
        }
        for (j=1; j<=i; ++j)
        { cout<<j;}


    }


        cout<<endl;
    }
    return 0;
}
