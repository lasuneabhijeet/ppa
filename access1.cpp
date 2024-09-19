#include<iostream>
using namespace std;
class base
{
    public:
     int i;
    private:
     int j;
    protected:
     int k;
    public:
      base()
      {
        i=10;
        j=20;
        k=30;
      }
       void gun()
    {
        cout<<i<<"\n";// allowed
        cout<<j<<"\n";// allowed
        cout<<k<<"\n";// allowed
    }

};
class derived : public base
{
    public:
    void fun()
    {
        cout<<i<<"\n";// allowed
        cout<<j<<"\n";//not allowed
        cout<<k<<"\n";//allowed
    }
};

int main()
{
    base dobj;
    
    cout<<dobj.i<<"\n";//Allowed
    cout<<dobj.j<<"\n";// Not Allowed
    cout<<dobj.k<<"\n";// Not Allowed
    return 0;
}