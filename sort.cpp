#include<iostream>
using namespace std;
int main(){
	int n,i,j,a[10],t;
	cout<<"enter the no of elements";
	cin>>n;
	cout<<"enter the elements one by one";
	for(i=1;i<=n;i++){
			cin>>a[i];}
			for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		if(a[i]<=a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			
	}}}
		for(i=1;i<=n;i++){
	cout<<a[i];}
	cout<<endl;
	cout<<"the maximum element is"<<a[n]<<endl;
	cout<<"the minimum element is"<<a[1]<<endl;
	cout<<"the sum of max and min is"<<a[n]+a[1]<<endl;
	cout<<"the diff is"<<a[n]-a[1]<<endl;
}

