#include<iostream>
using namespace std;
class demo
{
    public:
      int i,j;
      static int k;

      demo()
      {
        i = 10;
        j = 20;
      }
      void fun()
      {
        cout<<"Inside non static Fun\n";
        cout<<this->i<<"\n";
        cout<<this->j<<"\n";
        cout<<k<<"\n";
      }
      static void Gun()
      {
        cout<<"Inside static gun\n";
        cout<<k<<"\n";
      }

};
int demo ::k = 30;
int main()
{
    cout<<"value of K is : "<<demo::k<<"\n";
    demo::Gun();

    demo obj1;
    demo obj2;
    cout<<sizeof(obj1);
    obj1.fun();
    obj2.fun();

    obj1.Gun();
    obj2.Gun();

    cout<<"Value of K using object : "<<obj1.k<<"\n";
    cout<<"Value of K using object : "<<obj2.k<<"\n";




    return 0;
}