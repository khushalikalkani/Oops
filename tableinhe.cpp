#include<iostream>
using namespace std;
class Base{
    public:
    int a;
    void number(){
        cout<<"Enter a number of table :"<<endl;
        cin>>a;
    }
};
class Derived1 : public Base{
    public:
    int product;
    void calc(){
    for(int i=1; i<=10; i++){
        product= a*i;
        cout<<a<<" * "<<i<<" = "<<product<<endl;
    }
    }
};
class Derived2 : public Base{
    public:
    int x,y,z;
    void reverse(){
        for(int i=0; a!=0; i++){
            x = a%10;
            a = a/10;
            cout<<x;
        }
    }
};
int main(){
    Derived1 d;
    d.number();
    d.calc();

    Derived2 z;
    z.number();
    z.reverse();
}                                                                                  