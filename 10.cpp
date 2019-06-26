#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class bus{
char name[20];
int noofpeople;
int noofbus;
void calculate() {
noofbus=(noofpeople/60)+1;
}
public:
void havedata() {
cout<<"Enter destination name: ";
cin>>name;
cout<<"Enter number of people travelling: ";
cin>>noofpeople;  }
void dispdata() {
cout<<"Bus to: "<<name<<endl;
cout<<"Number of people travelling: "<<noofpeople<<endl;
calculate();
cout<<"Number of buses needed: "<<noofbus<<endl;  }
};
int main(){
bus b;
cout<<"Enter details: "<<endl;
b.havedata();
cout<<endl<<"***********************************"<<endl;
cout<<"*****Bus Capacity is 60 people*****"<<endl;
cout<<"***********************************"<<endl;
b.dispdata();
}

