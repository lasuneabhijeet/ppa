#include<iostream>


using namespace std;
class MArvellous
{
    public:
      int No1;
      int No2;
      MArvellous()
      {
        cout<<"Inside default constructor\n";
        No1 = 0;
        No2 = 0;
      }
      MArvellous(int A,int B)
      {
        cout<<"Inside parametrised constructor\n";
        No1 = A;
        No2 = B;
      }
      ~MArvellous()
      {
        cout<<"Inside destructor\n";
      }
      void Fun()
      {
        cout<<"Inside Fun\n";
      }
};

int main()
{
    MArvellous mobj;
    MArvellous mobj1(11,21);
    mobj.Fun();


    return 0;
}