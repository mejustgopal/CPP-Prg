#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int i,j;
	for(i=2;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
//			cout.width(5);
			cout<<setw(5)<<i*j;
		}
		cout<<endl;
	}
	return 0;
}
