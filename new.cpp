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
    void Newserial()
    {
        cout<<"\nEnter the values of serial code";
        cin>>serialcode;
        cout<<"Enter the title";
        cin>>title;
    }
   void Otherentries(int du,int n)
    {
        duration=du;
        noofeps=n;
    }
   void Dispdata()
    {
        cout<<"The Following are the details:";
        cout<<serialcode<<"\t"<<title<<"\t"<<duration<<"\t"<<noofeps<<"\t";
    }
  //  ~serial();
};
/*serial::~serial()
{
    cout<<"\n Destructor called";
}*/
int main()
{cout<<"**********************Book Details************\n";
    serial s;
    s.Newserial();
    s.Dispdata();
    s.Newserial();
    s.Otherentries(10,15);
    s.Dispdata();
}
