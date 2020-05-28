#include<iostream>
using namespace std;
struct name
{
    char first[40];
    char mid[40];
    char last[60];
}n;

struct phone
{
    char area[4];
    char exch[4];
    char number[6];
}p;

class p_rec
{public:
    p_rec()
    {
        p.area[0]='D';
        p.exch[0]='A';
        p.number[0]='1';
    }
    void getdata()
    {
        cout<<"Enter the data\n";
        cin>>n.first>>n.mid>>n.last;
    }
    void printdata()
    {
        cout<<"The Entered details are:\n";
        cout<<n.first<<"  "<<n.mid<<"  "<<n.last<<"\t"<<p.area<<p.exch<<p.number;
    }
}r;

int main()
{r.getdata();
r.printdata();

}
