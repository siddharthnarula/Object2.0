#include <iostream>
using namespace std;

int main()
{int x;
   cout<<"Array size is 10\n";
for( x=0;x<11;x++)
  {
   cout << "Before try \n";}

   try {
      cout << "Inside try \n";
      if (x > 10)
      {
         throw x;
         cout << "After throw (Never executed) \n";
      }
   }
   catch (int x ) {
      cout << "Exception Caught \n";
   }

   cout << "After catch (Will be executed) \n";
   return 0;
}
