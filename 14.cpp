#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
class audi
{   public :
    static int cont;
    string name[10];
    int i,empno;
    void getdata()
    {cout<<"Enter the empno. and names of people inside the auditorium";
        for(i=0;i<10;i++)
            {   cin>>empno;
             if (empno==0)
                break;
                cin>>name[i];
                cont++;

                }
            }

  audi()
  {
     //do nothing
  } ;
}a;
int audi::cont=0;
int main()
{ a.getdata();
    cout<<"No of members is";
    cout<<audi::cont;

}
