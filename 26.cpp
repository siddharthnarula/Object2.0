#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class LIST {public:
    virtual void store()
    {cout<<"Virtual Store";}
    virtual void retrieve()
    {cout<<"Virtual Retrieve";}};

class stac:public LIST{
    stack<int> mystack;
public:
    void store()
    {   mystack.push(0);
        mystack.push(1);
        mystack.push(2);
        cout<<"\nValues in Stack Stored";}
    void retrieve()
    { cout<<"\nStack Retrieve ";
         while (!mystack.empty()) {
        cout << ' ' << mystack.top();
        mystack.pop();}}};

class que: public LIST{
    queue<int> myqueue;
    public:
    void store()
    {myqueue.push(0);
    myqueue.push(1);
    myqueue.push(2);
        cout<<"\nData in Queue Stored";}
    void retrieve()
    {cout<<"\nQueue Retrieved as follows:";
        while (!myqueue.empty())
            {cout << ' ' << myqueue.front();
        myqueue.pop();}}};

int main()
{   LIST *ptr, *qptr;
    stac s;
    que q;
    qptr= &q;
    ptr = &s;
    qptr->store();
    qptr->retrieve();
    ptr->store();
    ptr->retrieve();}
