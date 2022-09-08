#include<iostream>
using namespace std;
class base
{
	public:
		void a()
		{
			cout<<"a";
		}
};
class derived:public base
{
	public:
		void b()
		{
			cout<<"b";
		}
};
class derived1:public derived
{
	public:
		void c()
		{
			cout<<"c";
		}
};
int main()
{
	derived1 obj;
	obj.a();
	obj.b();
	obj.c();
	return 0;
}
