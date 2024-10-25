#include<iostream>

using namespace std;
class base
{
    public:
    int i;
    float f;
    virtual void gun() = 0;
    virtual void fun() = 0;
    virtual void run()
    {
        cout<<"Base run";
    }
};
class Derived : public base
{
    public :
    int j;
    double d;
    void sun()
    {
        cout<<"Derived sun";
    }
    void fun()
    {
        cout<<"Derived fun";

    }
    void gun()
    {
        cout<<"Derived gun";

    }
    virtual void mun()
    {
        cout<<"Derived mun";
    }
};
int main()
{
    cout<<"Size of  Base class :"<<sizeof(base)<<"\n";
   cout<<"Size of  deriverd class :"<<sizeof(Derived)<<"\n";
    base *bp = NULL;
    Derived dobj;
    bp = &dobj;
    bp->fun();
    bp->gun();
   // bp->sun();
    bp->run();
   // bp->mun();
    return 0;
}