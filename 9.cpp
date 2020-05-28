#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class employee{
char ename[20];
int empno;
float basic;
float hra,da,netpay;
void calculate() {
hra=0.1*basic;
da=0.2*basic;
netpay=basic+(hra+da);
}
public:
void havedata() {
cout<<"Enter Employee no.: ";
cin>>empno;
cout<<"Enter Employee name: ";
cin>>ename;
cout<<"Enter Basic salary: ";
cin>>basic;
}
void dispdata() {
cout<<"Employee No.: "<<empno<<endl;
cout<<"Name: "<<ename<<endl;
cout<<"Basic Salary: "<<basic<<endl;
calculate();
cout<<"NetPay: "<<netpay<<endl;  }
};

int main(){
employee e;
cout<<"Enter Employee details: "<<endl;
e.havedata();
cout<<endl<<"***********************************"<<endl;
e.dispdata();
}
