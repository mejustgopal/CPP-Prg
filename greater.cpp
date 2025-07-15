#include <iostream>
using namespace std;

int bigger(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int x, y, big;
    cout << "Enter first number : ";
    cin >> x;

    cout << "Enter second number : ";
    cin >> y;

    big = bigger(x, y);
    cout << "Bigger no is " << big;
    
    return 0;
}