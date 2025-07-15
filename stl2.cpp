#include <iostream>

using namespace std;

int main()
{
    int i = 5;
    int j = 7;

    cout << "Values before swapping are : " << endl;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;

    swap(i, j);

    cout << "Values after swapping are : " << endl;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;

    return 0;
}
