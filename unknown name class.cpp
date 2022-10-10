#include<iostream>
#include<string.h>
using namespace std;
class student{
	public:
		char*name;
		student(char*s){
		name=s;
		}
			student()
			{
			 name="unknown";
			}
			void p_name(){
		cout<<name;  
	}
};
		
int main()
{
	student obj;
	obj.p_name();
	student o("vishnu");
	o.p_name();
	return 0;
}


