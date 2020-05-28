
#include<iostream>
#include<math.h>
using namespace std;
class coordinates
{public:
int x,y;
void read()
{cout<<"enter the x coordinate: ";
cin>>x;
cout<<"enter the y coordinate: ";
cin>>y;}
void display()
{cout<<"\n x coordinate: "<<x;
cout<<"\n y coordinate: "<<y;}};
class distanc :public coordinates
{int dis;
public:
void dist()
{dis=sqrt((x*x)+(y*y));
cout<<"\ndistance from origin: "<<dis;}};
int main()
{distanc d;
d.read();
d.display();
d.dist();}
