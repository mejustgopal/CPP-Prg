// WAP TO CHECK WHETHER THE GIVEN NO IS EVEN OR ODD USING GOTO STATEMENT

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter a no : ";
    cin >> num;
    if (num & 1)
        goto odd;
    else
        goto even;

even:
    cout << num << " is an even number";
    return 0;
odd:
    cout << num << " is an odd number";
    return 0;
}
