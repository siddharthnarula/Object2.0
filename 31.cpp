#include <iostream>
#include <string.h>
#include<ctype.h>
#include<stdio.h>
using namespace std;
class my_string{
   private:
           char str[30];
   public:


          void getdata(){
  cout<<"\nEnter the string : ";
  cin>>str;
}
          void display(){
   cout<<"\n"<<str;
}
int operator= (my_string str1)
{
   if(strcmp(str,str1.str)==0)
     return 1;

     return 0;
}
    void operator== (my_string str1){
   strcpy(str1.str,str);
   cout<<"\n\tCopied String is : "<<str1.str;
}
          void operator+ (my_string str1){
   strcat(str,str1.str);
   cout<<"\n\t--String After Concat is : "<<str;
}
void len()
{   cout << "\n\nString Length = " << strlen(str);
}
void up()
{
   for(int i=0;i<=strlen(str);i++)
  {
	    if(str[i]>=97 && str[i]<=122)
	    {
		str[i]=str[i]-32;
	    }
  }
  cout<<"\nThe String in Uppercase = "<<str;
  }
void low()
{char c;
 cout<<"\n";
 cout<<"\nThe String in LowerCase = ";
    for(int i=0;i<strlen(str);i++)
  {
    c=str[i];

    putchar (tolower(c));
  }
}
};
int main()
{int c;
    my_string a,b;
    cout<<"\nEnter the 1st string-\n";
                      a.getdata();
                      cout<<"\nEnter the 2nd string-\n";
                      b.getdata();
                       a==b;
                       a+b;
                       a.len();
                       b.len();
                       a.up();
                       b.low();
                       c=a=b;
                       if (c==0)
                       {cout<<"\n\nGiven Strings are not equal";}
                       else {cout<<"\n\nThey are equal";}

}
