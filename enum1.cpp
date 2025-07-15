#include <iostream>
using namespace std;

enum mobile
{
    BatteryCapacity = 1,
    CameraQuality = 2,
    LargeStorage = 4
};

int main()
{

    int feature = CameraQuality | LargeStorage;

    cout << feature;

    return 0;
}