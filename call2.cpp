#include <iostream>
using namespace std;

void increment(int &s)
{
    s = s + 5000;
    cout << "Salary inside function :" << s << endl;
}

int main()
{
    int sal = 20000;
    increment(sal);
    cout << "Salary inside main : " << sal << endl;
    return 0;
}