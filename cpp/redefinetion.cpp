#include<iostream>

using namespace std;

class Base
{
    public:
      void Fun()
      {
        cout<<"INside Base fun\n";
      }
};
class Derived : public Base
{
    public:
      void Fun()
      {
        cout<<"INside derived FUn \n";
      }
};
int main()
{
    cout<<sizeof(Base)<<"\n";
    Base bobj;
    bobj.Fun();
    Derived dobj;
    dobj.Fun();

    return 0;

}