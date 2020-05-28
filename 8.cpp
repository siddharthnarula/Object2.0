#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class bank
{char name[20];
int accno;
char acctype;
float balance=0.0;
public:
void getdata() {
cout<<"Enter Name: ";
cin>>name;
cout<<"Enter Account number: ";
cin>>accno;
cout<<"Enter type of account (s or c): ";
cin>>acctype;
deposit();   }
void deposit() {
float a;
cout<<"How much you want to deposit? ";
cin>>a;
balance+=a;   }
void withdraw() {
int a;
cout<<"So,"<<name<<" How much you want to withdraw? ";
cin>>a;
if(a<balance)
    {balance-=a;
    cout<<"Amount withdrawn... New Balance= "<<balance<<endl<<endl; }
else
cout<<"Balance is less";    }
void showdata()
{cout<<"Name: "<<name<<endl;
cout<<"Account number: "<<accno<<endl;
cout<<"Account type: "<<acctype<<endl;
cout<<"Account Balance: "<<balance<<endl;    }    };
int main(){
bank b[3];
cout<<"Enter details: "<<endl;
for(int i=0;i<3;i++)
{b[i].getdata();
 cout<<"****************************************"<<endl;}
b[0].withdraw();
cout<<"Details are: "<<endl;
for(int i=0;i<3;i++)
{b[i].showdata();
 cout<<"****************************************"<<endl;    }}
