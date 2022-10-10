#include<iostream>
using namespace std;
class student
{
	public:
		student()
		{
			cout<<"student"<<endl;
		}
};
class college:public student
{
	public:
		college()
		{
			cout<<"college"<<endl;
		}
};
class home:public student
{
	public:
		home()
		{
			cout<<"home"<<endl;
		}
};
class tution:public student
{
	public:
		tution()
		{
			cout<<"tution"<<endl;
		}
};
class oops:public college
{
	public:
		oops()
		{
			cout<<"oops"<<endl;
		}
};
class work:public home
{
	public:
		work()
		{
			cout<<"work"<<endl;
		}
};
class html:public tution
{
	public:
		html()
		{
			cout<<"html"<<endl;
		}
};
class job:public oops,public work//,public html
{
	public:
		job()
		{
			cout<<"job"<<endl;
		}
};
int main(){
	job o1;
	/*o1.student();
    o1.college();
	o1.home();		
	o1.tution();
	o1.oops();	
	o1.work();
	o1.html();	
	o1.job();*/
	return 0;		
}



