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
class Derived1 : public Base{
    int n;
    public:
    void setN(int z)
    {
        n = z;
    }
    void product()
    {
        cout<<"product of m and n is:"<<m*n<<endl;
    }
};
class Derived2 : public Base{
    int p;
    public:
    void setP(int z)
    {
        p = z;
    }
    void Add()
    {
        cout<<"addition of m and n is:"<<m+p<<endl;
    }
};
int main(){
    Derived1 d;
    d.setM(15);
    d.setN(6);
    d.product();

    Derived2 z;
    z.setM(10);
    z.setP(20);
    z.Add();
}