#include<iostream>
using namespace std;
int main()
{
	int i=1, num;
	cout<<"Enter No : "<<endl;
	cin>>num;
	while(i<=10)
	{
		cout<<num<<" X "<<i<<" = "<<num*i<<endl;
		i++;
	}
	return 0;
}
