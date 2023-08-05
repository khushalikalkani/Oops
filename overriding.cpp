#include<iostream>
using namespace std;
class Base{
    public:
    virtual void Test(){
        cout<<"Base class called...."<<endl;
    }
};
class Derived : public Base{
    public:
    void Test(){
        cout<<"Derived class called...."<<endl;
    }
};
int main()
{
    Base *ptr, b;
    Derived d;
    ptr = &b;
    ptr->Test();

    ptr = &d;
    ptr->Test();
}