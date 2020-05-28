#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class strings
{
char str[100];

public:
strings() {
strcpy(str,"NULL");          }

strings(char s[100]) {
strcpy(str,s);      }

strings (strings &s1) {
strcpy(str,s1.str);    }

void dispdata() {
cout<<"String: "<<str<<endl;     }

~strings() {
 //destructor       }
}
};

int main()
{
char s[100];
strings s1;
cout<<"Default constructor: "<<endl;
s1.dispdata();
cout<<endl<<"*************"<<endl;
cout<<"Enter string for second object: ";
cin.get(s,100);
strings s2(s);
cout<<"*************"<<endl;
s2.dispdata();
cout<<"For third object, string is copied"<<endl;

strings s3(s2);
cout<<"*************"<<endl;
s3.dispdata();
}
