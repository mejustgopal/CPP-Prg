#include <iostream>
using namespace std;

int sum(int x, int y)
{
    int z;
    z = x + y;
    return z;
}

int main()
{
    int s = sum(5,10);
    cout<<"Sum = "<<s;
}