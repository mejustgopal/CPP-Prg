//WAP USING GOTO TO TAKE INPUT FROM USER UNTIL A NEGATIVE NO IS ENTERED AND THEN PRINT THE SUM OF THE NUMBERS ENTERED

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a no : " << endl;
entry:
    cin >> n;
    if (n > 0)
    {
        sum += n;
        goto entry;
    }
    else
    {
        goto end;
    }
end:
    cout << "Sum = " << sum;
    return 0;
}