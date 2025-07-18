#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter a no : ";
    cin >> num;
    if (num > 0)
        goto positive;
    else
        goto negative;

positive:
    cout << num << " is positive";
    return 0;
negative:
    cout << num << " is negative";
    return 0;
}
