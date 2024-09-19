#include<iostream>
using namespace std;

class demo
{
    public:
     int A;
    private:
     int B;
    public:
     demo()
     {
        A = 11;
        B = 21;
     }
    void Fun()
    {
        cout<<"VAlue of A :"<<A<<"\n";//Allowed
        cout<<"Value of B :"<<B<<"\n";//Allowed
    }
};
int main()
{
    demo obj;
    obj.Fun();                       //Allowed
    cout<<"Value of A"<<obj.A<<"\n";//Allowed
    cout<<"Value of B"<<obj.B<<"\n";// not Allowed

    return 0;
}