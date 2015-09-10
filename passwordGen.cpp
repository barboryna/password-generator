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

char genRandom()  // Random string generator function.
{
    return alphanum[rand() % stringLength];
}

int main()
{
    srand(time(0));
    string password = "";

    for(int z=0; z < 8; z++)
    {
       password += genRandom();
    }

    cout << password;

    return 0;

}
