// WAP TO PRINT NUMBERS B/W 1 TO 10 EXCEPT 7,8,9.

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 7 || i == 8 || i == 9)
            continue;
    cout<<i<<endl;
    }
    return 0;
}