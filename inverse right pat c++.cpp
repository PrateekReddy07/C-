#include<iostream>
using namespace std;
int main()
{
	int rows,i,j;
	cout<<"enter the number of rows";
	cin>>rows;
	for(i=rows;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		cout<<"*";
	cout<<"\n";
}
}
