#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
    char str[] = "Geeks for Geeks";
    char *token;
    char *rest = str;

    while ((token = strtok_r(rest, " ", &rest)))
        cout<< token;

    return(0);
}
