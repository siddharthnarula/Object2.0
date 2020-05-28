#include<iostream>
using namespace std;
void repch(char s[])
{
	
	for(int i=0;s[i]!='\0';i++)
	{
	if(((i%2)!=0)&&(s[i]!=s[i+1]))
	s[i]='@';
else if(s[i]==s[i+1])
s[i+1]='!';

}
}
int main()
{char str[]="SUCCESS";
cout<<"original string"<<str;
repch(str);
cout<<"changed string"<<str;
}
