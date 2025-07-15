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
    cout << "Size : " << v.size() << endl;

    v.resize(7);
    cout << "After resizing it becomes " << v.size() << endl;

    if (v.empty() == false)
    {
        cout << "Not Empty" << endl;
    }
    else
    {
        cout << "It is Empty";
    }

    cout << "Elements of vector : " << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}