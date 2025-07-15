#include<iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 10; i >= 1; i--)         // Start from 10 and go down to 1
    {
        for (j = 1; j <= i; j++)      // Print 'i' asterisks on each line
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
