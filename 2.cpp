
/*                        EXPERIMENT-2
AIM:-WAP TO FIND THE SIMPLE INTEREST

*/
#include<iostream>
using namespace std;

int main()
{
	int p,r,t,si;
	cout<<"Enter Principle : ";
	cin>>p;
	cout<<"Enter Rate : ";
	cin>>r;
	cout<<"Enter Time : ";
	cin>>t;
	si=(p*r*t)/100;
	cout<<"Simple interest is : "<<si;
	return 0;
}
