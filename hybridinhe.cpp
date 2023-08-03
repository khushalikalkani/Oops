#include<iostream>
using namespace std;
class Base{
    protected:
    int m;
    public:
    void setM(int a)
    {
        m = a;
    }
};

class Test{
    
    public:
    int n;
    void setN(int z)
    {
        n = z;
    }
};

class Derived : public Base{
    protected:
    int p;
    public:
    void setP(int z)
    {
        p = z;
    }
};

class ABC:public Test,public Derived
{
    public:
    void Add(){
         cout<<"addition of m,n and p is:"<<m+n+p<<endl;
    }
};
int main(){
    ABC a;
    a.setP(10);
    a.setM(20);
    a.setN(50);
    a.Add();
}