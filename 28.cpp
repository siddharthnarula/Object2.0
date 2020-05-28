#include<iostream>
using namespace std;
class Incre
{   int a, b;
     public:
        void accept()
        {cout<<"\n Enter Two Numbers : \n";
                cout<<" ";
                cin>>a;
                cout<<" ";
                cin>>b;}

        void operator++()
        {       a++;
                b++;}
        void display()
        {       cout<<"\n A : "<<a;
                cout<<"\n B : "<<b;}};
int main()
{       Incre id;
        id.accept();
        ++id;
        cout<<"\n\n After Incrementing : ";
        id.display();}
