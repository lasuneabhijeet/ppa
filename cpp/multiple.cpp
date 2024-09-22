#include<iostream>
using namespace std;

class base1
{
    public:
      int i,j;
      base1()
      {
        cout<<"Inside base1 constructor \n";
        i = 10;
        j = 20;
      }
       ~base1()
      {
        cout<<"Inside base1 constructor \n";
      }
      void fun()
      {
        cout<<"Inside Fun of base1 \n";
      }
};
class base2
{
    public:
      int x,y;
      base2()
      {
        cout<<"Inside base2 constructor \n";
        x = 30;
        y = 40;
      }
       ~base2()
      {
        cout<<"Inside base2 constructor \n";
      }
      void gun()
      {
        cout<<"Inside Fun of base2 \n";
      }
};
class derived :public base1,public base2
{
    public:
    int a,b;
    derived()
    {
        cout<<"Inside derived constructor \n";
        a = 50;
        b = 60;
    }
     ~derived()
    {
        cout<<"Inside derived constructor \n";
    }
    void sun()
    {
        cout<<"Inside derived sun\n";

    }
};
int main()
{
    derived dobj;

    cout<<sizeof(base1)<<"\n";
    cout<<sizeof(base2)<<"\n";
    cout<<sizeof(derived)<<"\n";
    return 0;
}