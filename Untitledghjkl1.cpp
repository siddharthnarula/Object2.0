#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
randomize();
int a[]={9,6},N;
int chance=random(2)+10;
for(int C=0;C<2;C++)
{
N=random(2);
cout<<a[N]+chance<<"#";
}

}

