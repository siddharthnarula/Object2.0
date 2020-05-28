#include <iostream>
using namespace std;

class shape
{public:
    int r,l,b;
    shape()
    {   r = 10;
        l=10;
        b=5;}};

class circle : public virtual shape
{   int ar;
    public:
    void ar_c()
    {   ar=3.14*r*r;
        cout<<ar;}};

class triangle : public virtual shape {
    int ar;
public:
    void ar_t()
    {   ar=(l*b)/2;
        cout<<ar;}};

class rectangle : public virtual shape {
        int ar;
public:
    void ar_r()
    {   ar=(l*b);
        cout<<ar;}};

class printres : public circle, public triangle, public rectangle
{public:
    void printdata()
    {cout<<"Area of triangle is : ";
     ar_t();
     cout<<endl;
     cout<<"Area of circle is : ";
     ar_c();
     cout<<endl;
     cout<<"Area of rectangle is : ";
     ar_r();
     cout<<endl;}};

int main()
{ printres obj;
  obj.printdata();}
