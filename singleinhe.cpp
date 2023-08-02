#include<iostream>
using namespace std;
class Base{
    int a;
    protected:
    int l;
    public:
    void hello()
    {
        cout<<"hello world........."<<endl;
    }
};
class Test : public Base
{
    public:
    void get()
    {
        Base :: l = 101;
        cout<<"Test class called......"<<endl;
        cout<<"value of l is: "<<l<<endl;
    }
};
int main()
{
    Test t;
    t.hello();
    t.get();
}