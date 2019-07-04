#include<iostream>
#include<stdio.h>
#define n1 10
using namespace std;
inline int largest(int n2, int n3)
{
    if(n1>=n2&&n1>=n3)
        return n1;
    if(n2>=n1&&n2>=n3)
        return n2;
    if(n3>=n1&&n3>=n2)
        return n3;
}
int main()
{ int n3,n2,val;
cout<<"Largest of 3 numbers";
cout<<"\nEnter 2 numbers 1 number is 10 :  ";
cin>>n2>>n3;
val=largest(n2,n3);
    cout << "The largest of 3 numbers is " << val << "\n";

}
