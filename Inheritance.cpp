#include<iostream>
using namespace std;
class publication
{char title[50];
float price;
public:
void getdata()
{cout<<"enter the title:";
cin>>title;
cout<<"enter the price:";
cin>>price;
}
void putdata()
{cout<<"\nThe title is:"<<title;
cout<<"\nThe price is:"<<price;
}};
class book:public publication
{int pgcount;
public:
void getdetails()
{cout<<"enter the page count:";
cin>>pgcount;}
void putdetails()
{cout<<"\nThe page count is:"<<pgcount;}};
class tape:public publication
{float min;
public:
void getinfo()
{cout<<"enter time in minutes:";
cin>>min;}
void putinfo()
{putdata();
cout<<"\nThe time in minutes is:"<<min;}};
int main()
{tape t;
book b;
t.getdata();
b.getdetails();
t.getinfo();
t.putinfo();
b.putdetails();
}
