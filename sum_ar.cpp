#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n, i;
    cout << "Enter number: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Sum is  " << sum;
    return 0;
}