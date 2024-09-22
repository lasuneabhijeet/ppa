#include<iostream>

using namespace std;
class arithmatic
{
    public:
    int No1;
    int No2;
    arithmatic(int A,int B)
    {
        No1 = A;
        No2 = B;
    }
    int Addition()
    {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }
    int substraction()
    {
        int Ans = 0;
        Ans = No1 - No2;
        return Ans;
    }


};
int main()
{
    int value1 = 0, value2 = 0,Ret = 0;

    cout<<"Enter first number :\n";
    cin>>value1;

    cout<<"Enter second number :\n";
    cin>>value2;

    arithmatic obj(value1,value2);//its importent
    Ret = obj.Addition();
    cout<<"Addition is: "<<Ret<<"\n";
    Ret = obj.substraction();
    cout<<"Substraction is: "<<Ret<<"\n";


   return 0;
}