#include<iostream>
using namespace std;
class Base1{
    public:
    int a;
    void setA()
    {
        cout<<"Enter a a number: ";
        cin>>a;
    }
};

class Base2{
    protected:
    int b;
    public:
    void setB()
    {
       cout<<"Enter a b number: ";
       cin>>b;
    }
};

class Derived: public Base1, public Base2
{
    public:
    int square;
    void product()
    {      
         for(int i=a; i<=b; i++){
            square = i*i;
            cout<<" "<<square;
       }
    }
};

int main(){
    Derived d;
    d.setA();
    d.setB();
    d.product();
}