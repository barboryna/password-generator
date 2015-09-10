#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char alphanum[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

int stringLength = sizeof(alphanum) - 1;

int main()
{
    srand(time(0));

    for(int z=0; z < 21; z++)
    {
       cout << alphanum[rand() % stringLength];;
    }

    return 0;

}
