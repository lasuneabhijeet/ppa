#include<iostream>

using namespace std;

class demo
{
    public:
     int i;
    private:
     int j;
    protected:
     int k;
    public:
    demo()
    {
        i = 10;
        j = 20;
        k = 30;

    }
    friend void Fun();

};
void Fun()
{
    demo obj;
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    cout<<obj.k<<"\n";
}
int main()
{
    Fun();
    return 0;
}