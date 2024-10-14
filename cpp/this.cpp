#include<iostream>
using namespace std;

class demo
{
    public:
      int No1,No2;
      demo(int A,int B)
      {
        No1 = A;
        No2 = B;

      }
      void Display(int X)
      {
        cout<<"Value of No1 :"<<this->No1<<"\n";
        cout<<"Value of No2 :"<<this->No2<<"\n";
        cout<<"Value of X :"<<X<<"\n";

      }
};
int main()
{
    demo obj(11,21);
    obj.Display(51);

    demo objnew(10,20);
    objnew.Display(30);
    return 0;

}