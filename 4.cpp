 /*                               EXPERIMENT-4

AIM:-WAP TO FIND THE SMALLEST OF THREE NUMBERS
*/


#include <iostream>
using namespace std;

int main()
{
    float n1,n2,n3;

    cout<<"Enter three numbers: ";
    cin>>n1>>n2>>n3;

    if(n1<=n2&&n1<=n3)
        cout<<"Smallest number: "<<n1;

    if(n2<=n1&&n2<=n3)
        cout<<"Smallest number: "<<n2;

    if(n3<= n1&&n3<=n2)
        cout<<"Smallest number: "<<n3;
    return 0;
}
