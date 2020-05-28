#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class student
{   string name;
    int age;
public:
    student(string name, int age)
    {   this->name = name;
        this->age = age;}
    void display()
    {   cout<< "Name:" << name << endl;
        cout<< "Age:" << age << endl;}
    void * operator new(size_t size)
    {   cout<< "Overloading new operator\n\n";
        void * p = malloc(size);
        return p;}
    void operator delete(void * p)
    {   cout<< "Overloading delete operator " << endl;
        free(p);}};

int main()
{student * p = new student("ABC", 20);
p->display();
    delete p;}
