#include<iostream>
using namespace std;
int main()
{char ch;
	int a;
	do{
	
	cout<<"Enter no.s from 1-7";
	cin>>a;
	switch(a)
	{case 1: cout<<"sunday";break;
	case 2: cout<<"monday";break;
	case 3: cout<<"tuesday";break;
	case 4: cout<<"wednesday";break;
	case 5: cout<<"thursday";break;
	case 6: cout<<"friday";break;
	case 7: cout<<"saturday";break;
	}
	cout<<"\n do you wish to cont..";
	cin>>ch;
}while(ch=='y');	return 0;

}
