#include <iostream>
using namespace std;
int main()
{
    int  i,j,k,n=5;
    for(i=n;i>=1;--i) {
        for(k=0;k<n-i;++k) {
            cout<<"  ";
        }
        for(j=i;j<=2*i-1;++j) {
            cout<< "* ";
        }
        for(j=0;j<i-1;++j) {
            cout<< "* ";
        }
        cout<<endl;
    }
    return 0;
}
