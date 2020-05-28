#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class cmplx{
float ar,br,ai,bi;

public:
cmplx() {
ar=2.3;
br=6.7;
ai=4.1;
bi=7.0;   }

cmplx(float a) {

ar=br=ai=bi=a;  }

cmplx(float a1,float a2) {
ar=br=a1;
ai=bi=a2;  }

void dispdata() {
cout<<"First complex number: "<<ar<<"+"<<ai<<"i"<<endl;
cout<<"Second complex number: "<<br<<"+"<<bi<<"i"<<endl;
cout<<"After adding both complex numbers: "<<ar+br<<"+"<<ai+bi<<"i"<<endl;       }
};

int main(){
float a,b;
cmplx c1;
cout<<"Default constructor: "<<endl;
c1.dispdata();
cout<<endl<<"*************"<<endl;
cout<<"Enter a number for second object: ";
cin>>a;
cmplx c2(a);
cout<<"*************"<<endl;
c2.dispdata();
cout<<"*************"<<endl;
cout<<"For third object,Enter two numbers: ";

cin>>a>>b;
cmplx c3(a,b);
cout<<"*************"<<endl;
c3.dispdata();
}
