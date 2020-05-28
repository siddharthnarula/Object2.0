#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"Enter a character : ";
	cin>>a;
	if(a>='a'&&a<='z')
	cout<<"The entered term is a lower case alphabet";
	else if(a>='A'&&a<='Z')
	cout<<"The entered term is a upper case alphabet";
		else if(a>='0'&&a<='9')
	cout<<"The entered term is a number";
	else
	cout<<"the entered term is a special character";	
}
