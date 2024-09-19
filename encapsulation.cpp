#include<iostream>

using namespace std;
class demo
{
    public:
       int A;
       int B;

       void fun()
       {
        cout<<"Inside Fun \n";
       }
       void gun()
       {
        cout<<"Inside Gun\n";
       }

};
int main()
{
    demo obj;

    cout<<sizeof(obj)<<"\n";//8
    obj.A = 11;
    obj.B = 21;

    obj.fun();//Inside Fun

    obj.gun();//Inside Gun

    cout<<obj.A<<"\n";//11
    cout<<obj.B<<"\n";//21




    return 0;
}