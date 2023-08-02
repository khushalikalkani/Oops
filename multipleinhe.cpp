#include<iostream>
using namespace std;
class Base1{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"Enter a: ";
        cin>>a;
    }
};
class Base2{
    protected:
    int b;
    public:
    void setB()
    {
        cout<<"Enter b: ";
        cin>>b;
    }
};
class Derived: public Base1, public Base2
{
    public:
    void product()
    {
        Base2 :: setB();
        cout<<"product of a and b is: "<<a*b<<endl;
    }
};
int main(){
    Derived d;
    d.setA();
    d.product();
}