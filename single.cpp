#include<iostream>

using namespace std;
class base
{
    public :
      int i,j;
      base()
      {
        cout<<"Inside Base Constructor\n";
        i = 10;
        j = 20;
      }
      ~base()
      {
        cout<<"Inside base destructor\n";
      }
      void fun()
      {
        cout<<"inside base  fun\n";
      }

};
class derived : public base
{
    public :
      int x,y;
      derived()
      {
        cout<<"Inside Derived Constructor\n";
        x = 30;
        y = 40;
      }
      ~derived()
      {
        cout<<"Inside Derived destructor\n";
      }
      void gun()
      {
        cout<<"inside derived gun\n";
      }

};

int main()
{
   // base bobj;
    derived dobj;
    cout<<"Inside main funcation\n";
    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";
   dobj.fun()
  dobj.gun()

   // cout<<sizeof(bobj)<<"\n";
    //cout<<sizeof(dobj)<<"\n";


    return 0;
}