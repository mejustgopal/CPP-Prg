#include <iostream>
using namespace std;

int main()
{
    int size, i;
    cout << "Enter the size: " << endl;
    cin >> size;
    int *ptr;

    ptr = new int[size];

    cout << "Enter the elements : " << endl;
    for (i = 0; i < size; i++)
    {
        cout << "Element : ";
        cin >> ptr[i];
    }

    cout << "\nElements that you have entered : " << endl;
    for (i = 0; i < size; i++)
    {
        cout << "Element : " << ptr[i] << endl;
    }
    delete[] ptr;

    return 0;
}