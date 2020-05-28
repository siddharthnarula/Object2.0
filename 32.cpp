#include <fstream>
#include<iostream>
using namespace std;
int main()
{
    fstream file;
    string word, t, q, filename;
    filename = "file.txt";
    file.open(filename.c_str());//The basic_string::c_str() is a
    //builtin function in C++ which returns a pointer to an array that contains
    //a null-terminated sequence of characters representing the current value of the basic_string object.;
    while (file >> word)
    {
        cout << word<<endl;
    }

    return 0;
}
