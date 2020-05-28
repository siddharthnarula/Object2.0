/*                                  EXPERIMENT -1
AIM:-WAP TO FIND THE SUM AND AVERAGE OF TWO NUMBERS
*/


#include <iostream>
using namespace std;

int main()
{
    int a,b,c,avg;
    cout << "Enter two integers to add : ";
    cin>>a>>b;
    c=a+b;
    cout<<"Sum of the Numbers:"<<c;
    avg=c/2;
    cout<<"\nAverage of the Numbers is :"<<avg;
    return 0;

}
