#include <iostream>
using namespace std;
class A {
private:
    int a;
public:
    void enterA() {cout<<"Largest of 2 numbers";
        cout<<"\nEnter value of a ";
    cin>>a;}
    friend class B;     // Friend Class
};
class B {
private:
    int b=0;
public:
    void enterB()
    {   cout<<"\nEnter value of b ";
        cin>>b;}
    void showlargest(A& x) {
        if(x.a>=b)
        cout<<"\nLargest number is a="<<x.a;
        else
            cout<<"\nLargest number is b="<<b;    }};

int main() {
   A a;
   B b;
  a.enterA();
   b.enterB();
   b.showlargest(a);
   return 0;}
