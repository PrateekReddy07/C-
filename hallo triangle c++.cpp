#include <iostream>
using namespace std;
int main()
{
    int height,i,j,k;
    cout<<"Enter the height of the triangle : "; 
    cin>>height;
    for (i = 1; i <= height; i++)
    {
        for (j = 1; j <= (height - i); j++)
        {
            cout<<" ";
        }
        for (k = 1; k <= i * 2 - 1; k++)
        {
            if (k == 1 || k == i * 2 - 1)
            {
                cout << "*";
            }
            else if (i == height)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
