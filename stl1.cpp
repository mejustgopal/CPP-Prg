#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    vector<int> ar = {1, 2, 3, 4, 5};

    vector<int>::iterator ptr;

    cout << "The elements of vector are : " << endl;

    for (ptr = ar.begin(); ptr < ar.end(); ptr++)
    {
        cout << *ptr << " ";
    }

    return 0;
}
