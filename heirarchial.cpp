#include<iostream>
using namespace std;
class father
  {
  	public:
  		void a()
  		{
  			cout<<"a";			
		}
  };
 
  class mother:public father
  {
  public:
  		void b()
  		{
  			cout<<"b";
		  }
  };
  class brother:public father
  {
  public:
  		void c()
  		{
  			cout<<"c";
		}
  };
  class sister:public father
  {
  public:
  		void d()
  		{
  			cout<<"d";
		}
  };
  int main()
  {
  	mother o1;
  	sister o3;
  	brother o2;
  	o1.a();
  	o1.b();
  	o2.a();
	o2.c();
  	o3.a();
  	o3.d();
  	return 0;
  }
  
  
