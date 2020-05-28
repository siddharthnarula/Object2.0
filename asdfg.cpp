#include <iostream>
using namespace std;


int main() {
	
	int i, no; 
	double fact=1;
cout<<"Enter the any no : ";
cin>>no;
for(i=1;i<=no;i++)
{
fact=fact*i;
}
cout<<"Factorial:  "<<fact;

    int count = 0;
 
    for (int i=5; fact/i>=1; i *= 5)
          count += fact/i;
          cout<<" \n No. of zeroes are:"<<count;
	return 0;
}
