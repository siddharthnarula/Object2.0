
 /*              EXPERIMENT-6
AIM:-WAP TO PRINT THE PATTERN
*/


#include <iostream>
using namespace std;

int main()
{   int i,j,n;
    cout<<"Enter the Number of lines : ";
    cin>>n;
    for(i=1;i<=n;++i)
        {for(j=0;j<i;j++)
            cout<<i;
            cout<<endl;
        }
}
