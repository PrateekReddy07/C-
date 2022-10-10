#include<iostream>
using namespace std;
int main(){
	try{
		int age=15;
		if(age>=18){
			cout<<"ok";
		}
		else{
			cout<<"no way";
		}
	}
	catch(int mynum){
		cout<<"mynum";
	}
}
