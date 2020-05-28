#include<fstream>



class bank
{
	int accno;
	char name[50];
	int deposite;
	public:
		getinfo();//to input details entered by user
		showinfo();//to output details entered by user
		change();//to modify details of a existing user
		deposite();// to take the amount user is depositing
		withdraw();//to remove the amount user is withdrawing
		
};
void bank::getinfo()
{
	{
	cout<<"\nEnter The account No. :";
	cin>>acno;
	cout<<"\n\nEnter The Name of The account Holder : ";
    gets(name,50);
	cout<<"\nEnter The Initial amount: ";
	cin>>deposit;
	cout<<"\n\n\nAccount Created..";
}

void bank::showinfo() 
{
	cout<<"\nAccount No. : "<<acno;
	cout<<"\nAccount Holder Name : ";
	cout<<name;

	cout<<"\nBalance amount : "<<deposit;
}

void account::change()
{
	cout<<"\nAccount No. : "<<acno;
	cout<<"\nModify Account Holder Name : ";
	gets(name,50);
	cout<<"\nModify Balance amount : ";
	cin>>deposit;
}


	
}

