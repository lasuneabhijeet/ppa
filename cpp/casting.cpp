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
};
class Derived : public Base
{
    public:
    int x,y;
      void Fun()
      {
        cout<<"INside derived FUn \n";
      }
};
int main()
{
   
    Base bobj;
   
    Derived dobj;
   
   Base *bptr = NULL;
   Derived *dptr= NULL;

   bptr = &bobj;// NO casting
   dptr = &dobj;// NO casting
   bptr = &dobj;// upcasting
   dptr = &bobj;//Downcasting

    return 0;

}