#include <iostream>
using namespace std;
int main()  
{ 
    int num, binary_num, decimal_num = 0, base = 1, rem;  
    cout<<" Enter a binary number with the combination of 0s and 1s \n";  
    cin>>num; 
    binary_num = num;    
    while ( num > 0)  
    {  
        rem = num % 10;
        decimal_num = decimal_num + rem * base;  
        num = num / 10; 
        base = base * 2;  
    }  
    cout<<"The binary number is "<<binary_num<<endl;
    cout<<"The decimal number is "<<decimal_num;   
    return 0;  
}
