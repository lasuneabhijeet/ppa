#include<iostream>

using namespace std;

class Base
{
    public:
    int i,j;
     virtual void Fun()     //1000
      {
        cout<<"INside Base fun\n";
      }
      void Gun()      //2000
      {
        cout<<"Inside Base Gun\n";
      }
      virtual void Sun()    //3000
      {
        cout<<"Inside Base Sun\n";
      }
      virtual void Run()  //4000
      {
        cout<<"Inside Base Run\n";
      }
};      
class Derived : public Base
{
    public:
    int x,y;
      virtual void Fun()   //5000
      {
        cout<<"INside derived FUn \n";
      }
       void Gun()   //6000
      {
        cout<<"Inside derived Gun\n";
      }
      virtual void mun()   //7000
      {
        cout<<"Inside derived mun\n";
      }
      void Run()   //8000
      {
        cout<<"Inside derived Run\n";
      }
};
int main()
{
    cout<<"Size of Base class :"<<sizeof(Base)<<"\n";
    cout<<"Size of derived class :"<<sizeof(Derived)<<"\n";
  
    Derived dobj;
   
   Base *bptr = NULL;
   
   bptr = &dobj;// upcasting

   bptr->Fun();//Base Fun
   bptr->Gun();// Base Gun
   bptr->Sun();// Base Sun
   bptr->Run();//Base Run
   //bptr->mun();//Error
   

    return 0;

}
