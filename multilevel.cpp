#include<iostream>

using namespace std;
class base
{
    public :
      int i, j;
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
class derivedx : public derived
{
    public :
      int a,b;
      derivedx()
      {
        cout<<"Inside DeriverdX constructor\n";
        a = 50;
        b = 60;

      }
       ~derivedx()
      {
        cout<<"Inside DeriverdX constructor\n";
      }
      void sum()
      {
        cout<<"Inside DerivedX sun\n";
      }

};

int main()
{
   
    derivedx dobj;
    //Constructors : Base ->Derived ->DerivedX
    cout<<"Inside main funcation\n";
    
    cout<<"size of base class"<<sizeof(base)<<"\n";//8
    cout<<"size of derived class"<<sizeof(derived)<<"\n";//16
    cout<<"size of deriverdX class"<<sizeof(derivedx)<<"\n";//24
    cout<<dobj.i<<"\n";//10
    cout<<dobj.j<<"\n";//20
    cout<<dobj.x<<"\n";//30
    cout<<dobj.y<<"\n";//40
    cout<<dobj.a<<"\n";//50
    cout<<dobj.b<<"\n";//60
    dobj.fun();//Inside fun of base
    dobj.gun();//Inside gun of derived
    dobj.sum();//Inside sum of derivedX


   //Destructors : Derivedx -> derived -> base


    return 0;
}