#include<iostream>
using namespace std;
#include<string.h>
#include<stdio.h>
class strin
{char *s;
public:
strin()
{strcpy(s,"NULL");
puts(s);}
strin(char *s1)
{strcpy(s,s1);
puts(s);}
strin(strin &s2)
{strcpy(s,s2.s);
puts(s);}
~strin()
{cout<<"\n DESTRUCTOR INVOKED";}};
int main()
{char *st;
cout<<"\n DEFAULT CONSTRUCTOR:"<<endl;
strin s1;
cout<<"\n PARAMETERISED CONSTRUCTOR:"<<endl;
cout<<"\n ENTER A STRING:";
cin>>st;
string s2(st);
cout<<"\n COPY CONSTRUCTOR:";
string s3(s2);}
