#include <iostream>
#include<math.h>
using namespace std;
class Areas
{   public:
    void Area(int x)
    { int ar;
    ar=3.14*x*x;
        cout << "Area of circle is " << ar << endl;}
    void Area(double x)
    { double ar;
    ar=x*x;
        cout << "Area of square is " << ar << endl;}
     void Area(double x, double y)
    { double ar;
    ar=x*y;
        cout << "Area of rectangle is " << ar << endl;}
    void Area(int x, int y,int z)
    { int ar,s;
		s = (x+y+z)/2;
		ar = sqrt(s*(s-x)*(s-y)*(s-z));
        cout << "Area of triangle is "<<ar<< endl;}};
int main() {
    Areas obj1;
    obj1.Area(9.12,10.00);
    obj1.Area(7);
    obj1.Area(9.132);
    obj1.Area(5,4,5);
    return 0;}
