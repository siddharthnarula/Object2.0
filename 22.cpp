#include<iostream>
using namespace std;
class student
{private:
char name[20];
int rollno;
public:
void getdata()
{cout<<"enter the name of student: ";
cin>>name;
cout<<"enter the roll number: ";
cin>>rollno;}
void showdata()
{cout<<"\nname: "<<name;
cout<<"\nroll number: "<<rollno;}};
class exam
{private:
char subject[20];
int marks;
public:
void getdetails()
{cout<<"enter the subject:";
cin>>subject;
cout<<"enter the marks: ";
cin>>marks;}
void showdetails()
{
cout<<"\nsubject:"<<subject;
cout<<"\nmarks: "<<marks;}};
class result:public exam, public student
{public:
void showresult()
{cout<<"\nYour result is: ";
showdata();
showdetails();}};
int main()
{result r;
r.getdata();
r.getdetails();
r.showresult();}
