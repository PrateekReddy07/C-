#include<iostream>
using namespace std;
int main()
{
	int a[20][20],b[20][20],mul[20][20],sum[20][20],r1,c1,r2,c2,i,j,k;
	cout<<"enter the no of rows and columns of first matrix";
	cin>>r1>>c1;
	cout<<"enter the no fo rows and columns of second matrix";
	cin>>r2>>c2;
	if(c1!=r2)
	cout<<"matrix does not exist";
	else
	cout<<"enter the elements of the first matrix";
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++){
			cin>>a[i][j];
		}
		cout<<"enter the elements of the second matrix";
	for(i=0;i<r2;i++)
		for(j=0;j<c2;j++){
			cin>>b[i][j];
		}
for(i=0;i<r1;i++)
	for(j=0;j<c2;j++){
		mul[i][j]=0;
	}
	for(i=0;i<r1;i++)
	for(j=0;j<c2;j++)
	for(k=0;k<c1;k++){
		mul[i][j]+=a[i][k]*b[k][j];
	}
		cout<<"multiplication of two matrices is"<<endl;
	for(i=0;i<r1;i++)
	for(j=0;j<c2;j++){		
cout<<" "<<mul[i][j];
if(j==c2-1)
cout<<endl;

	}
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			sum[i][j]=a[i][j]+b[i][j];
			
		}
		cout<<"addition of two matrices are "<<endl;
			for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			cout<<" "<<sum[i][j];
			if(j==c2-1)
cout<<endl;
	}
}
}
}

