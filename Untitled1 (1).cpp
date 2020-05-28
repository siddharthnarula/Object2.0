#include<iostream>
using namespace std;

 class user
 {
     char name[30];
     int u_id;
     int age;
     char org[4];
     char dep[10];
     char grade;
 public:
    void getdata()
    {   cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter User Id:";
        cin>>u_id;
        cout<<"Enter age:";
        cin>>age;
        cout<<"Organization:";
        cin>>org;
        cout<<"Enter department name:";
        cin>>dep;
        cout<<"Enter Grade";
        cin>>grade;
    }
    void showdata()
    {
        cout<<"The Employee details are\n";
        cout<<"\nName:"<<name;
        cout<<"\nUser Id:"<<u_id;
        cout<<"\nAge:"<<age;
        cout<<"\nOrganization:"<<org;
        cout<<"\nDepartment:"<<dep;
        cout<<"\nGrade:"<<grade;
    }};
   /* void _search()
    {
        cout<<"Enter the User Id to be searched: ";
        cin>>x;
        if(x==u_id)
            cout<<"User details found";
    }
 };

 class pc: public user
 {
     char make[30];
     char model[30];
     char os[10];
     char ram[10];
     char rom[10];
     int hdd;
     char softreq[10];
 };

 class mouse: public user
 {
     char make[30];
     char model[30];
     int serial;
 };

 class keyboard: public user
 {
     char make[30];
     char model[30];
     int serial;
 };

 class printer: public user
 {
     char make[30];
     char model[30];
     int serial;
     char type;
 };

 */
int main()
 {
     user u;
     u.getdata();
     u.showdata();
 }
