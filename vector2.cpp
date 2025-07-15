#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
    }

    cout << "Vector size is : " << v.size() << endl;
    cout << "Capacity of vector is : " << v.capacity() << endl;

    cout << "Maximum size of vector is : " << v.max_size() << endl;

    v.resize(5);
    cout << "Vector size after resizing is : " << v.size() << endl;

    if (v.empty() == false)
    {
        cout << "Vector is not empty";
    }

    else
    {
        cout << "Vector is empty";
    }
    return 0;
}
