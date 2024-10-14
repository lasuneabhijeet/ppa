#include<iostream>

using namespace std;

class Base
{
    public:
    int i,j;
      void Fun()
      {
        cout<<"INside Base fun\n";
      }
      void Gun()
      {
        cout<<"Inside Base Gun\n";
      }
       void Sun()
      {
        cout<<"Inside Base Sun\n";
      }
       void Run()
      {
        cout<<"Inside Base Run\n";
      }
};      
class Derived : public Base
{
    public:
    int x,y;
      void Fun()
      {
        cout<<"INside derived FUn \n";
      }
       void Gun()
      {
        cout<<"Inside derived Gun\n";
      }
      void Sun()
      {
        cout<<"Inside derived Sun\n";
      }
      void mun()
      {
        cout<<"Inside derived mun\n";
      }
};
int main()
{
  
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
