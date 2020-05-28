# include <iostream.h>
using namespace std;

int main()
{
    char a;
    float num1, num2;
    int nu1,nu2;

    cout << "Enter operator either + or - or * or / or p for ++ or d for -- or %: ";
    cin >> a;



    switch(a)
    {
        case '+':{

		cout << "Enter two numbers you want to add  ";
    cin >> num1 >> num2;
            cout << num1+num2;
            break;
}
        case '-':{

		cout << "Enter two numbers you want to subtract  ";
		cin >> num1 >> num2;
            cout << num1-num2;
            break;}

        case '*':{

		cout << "Enter two numbers you want to multiply  ";
		cin >> num1 >> num2;
            cout << num1*num2;
            break;}

        case '/':
        	{

		cout << "Enter two numbers you want to divide  ";
		cin >> num1 >> num2;
            cout << num1/num2;
            break;}
            case 'p':
            	{
						cout << "Enter  number you want to increment  ";
            		cin>>num1;
            		num1=++num1;
            		cout<<num1;
            		break;

}
         case 'd':
            	{
						cout << "Enter  number you want to decrement  ";
            		cin>>num1;
            		num1=--num1;
            		cout<<num1;
            		break;

}
         case '%':
            	{
						cout << "Enter  numbers you want to find the remainder";
            		cin>>nu1>>nu2;
            		int r=nu1%nu2;
            		cout<<r;
            		break;

}


        default:

            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
