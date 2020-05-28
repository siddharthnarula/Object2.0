#include<iostream>
using namespace std;
int main()
{int x=0,i=0,j=0,k=0,y=1;
for(i=1;i<70;i++)
{cout<<y<<endl;
    for(j=1;j<i;j++)
    {
        for(k=1;k<j;k++)
            x=x+1;

    }
y++;}
cout<<x<<endl;
cout<<i<<j<<k;
}
