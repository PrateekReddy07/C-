#include <iostream>
using namespace std;

class degree{
 public:
  void a()
  {
   cout<< "I got a degree";
  }
};
class undergraduate:public degree{
 public:
  void b()
  {
   cout<<"I am an Undergraduate";
  }
};
class postgraduate:public degree{
 public:
  void c()
  {
   cout<<"I am a Postgraduate";
  }
};
int main()
{
 undergraduate o1;
 postgraduate o2;
 o1.b();
 o1.a();
 o2.c();
 o2.a();
 return 0;
}
