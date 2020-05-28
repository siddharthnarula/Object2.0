#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class student
{char name[20];
char stream[20];
int roll;
float a[5],percent;
public:
void getdata()
{cout<<"Enter Roll no.: ";
cin>>roll;
cout<<"Enter name: ";
cin>>name;
cout<<"Enter marks of five subjects: "<<endl;
for(int i=0;i<5;i++)
cin>>a[i];
}
void calculate()
{int sum=0;
for(int i=0;i<5;i++)
sum=sum+a[i];
percent=sum/5;
}
void assign() {
if(percent>=96)
strcpy(stream,"Computer science");
else if(percent>91&&percent<=95)
strcpy(stream,"Electronics");
else if(percent>86&&percent<=90)
strcpy(stream,"Mechanical");
else if(percent>81&&percent<=85)
strcpy(stream,"Electrical");
else if(percent>76&&percent<=80)
strcpy(stream,"Chemical");
else if(percent>71&&percent<=75)
strcpy(stream,"Civil");
}
void showdata()
{cout<<"Roll No.: "<<roll<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Marks: ";
for(int i=0;i<5;i++)
cout<<a[i]<<" ";
cout<<endl;
calculate();
cout<<"Percentage: "<<percent<<endl;
assign();
cout<<"Stream: "<<stream; }};
int main(){
student s;
cout<<"Enter student details: "<<endl;
s.getdata();
s.showdata();}
