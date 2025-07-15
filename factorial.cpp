#include <iostream>
using namespace std;

int fact(int num)
{
    if (num == 0 || num == 1)
        return 1;
    else
        return num * fact(num - 1);
}

int main()
{
    int n, f;

    cout << "Enter no : ";
    cin >> n;

    if (n < 0)
        cout << "Factorial is not defined for  negative numbers. " << endl;
    else
        cout << "Factorial of " << n << " is " << fact(n) << endl;
}