#include<iostream>
using namespace std;
class number{
	public:
	int	number()
		{
			cout<<"2"<<endl;
		}
};
class square:public number{
	public:
		int square()
		{
			cout<<"4"<<endl;
		}
};
class cube:public number{
	public:
		int cube()
		{
			cout<<"8";
		}
};
int main()	
{
	square o1;
	cube o2;
	o1.number();
	o1.square();
	o2.number();
	o2.cube();
	return 0;
}
