#include <iostream>
using namespace std;
class serial
{
    int serialcode;
    char title[20];
    float duration;
    int noofeps;
public:
    serial()
    {
        duration=30;
        noofeps=10;
    }
    Newserial()
    {
        cout<<"Enter the values of serial code";
        cin>>serialcode;
        cout<<"\nEnter the title";
        cin>>title;
    }
    Otherentries(int du,int n)
    {
        duration=du;
        noofeps=n;
    }
    Dispdata()
    {
        cout<<"The Following are the details:";
        cout<<serialcode<<"\t"<<title<<"\t"<<duration<<"\t"<<noofeps<<"\t";
    }
};

int main()
{cout<<"Book Details************/n";
    serial s;
    s.Newserial();
    s.Dispdata();
    s.Newserial();
    s.Otherentries(10,15);
    s.Dispdata();
}

