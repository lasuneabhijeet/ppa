#include<iostream>

using namespace std;
class demo
{
    public:
      int No1,No2;
      demo(int A, int B)
      {
        No1 = A;
        No2 = B;
      }
      void Fun()
      {
        No1++;
        No2++;
      }
      void Gun() const
      {
        //No1++;
        //No2++;
      }
};
int main()
{
    demo obj1(10,20);
    const demo obj2(11,21);
    obj1.Fun();
    obj1.Gun();

    //obj2.Fun();
    obj2.Gun();


    return 0;
}