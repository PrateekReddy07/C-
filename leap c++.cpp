#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"provide a year";
	cin>>a;
	if(a%4==0)
	{
		cout<<"its a leapyear";
	}
	else
	{
		cout<<"not a leap year";
	}
	return 0;
}
