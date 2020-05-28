#include <iostream>
using namespace std;
template <typename T>
T square(T x)
{ x=x*x;
   return x;
}

int main()
{
  cout << square<int>(3) << endl;
  cout << square<double>(3.0121122) << endl;
  cout << square<float>(3.13) << endl;

  return 0;
}
