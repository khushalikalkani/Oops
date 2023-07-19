#include<iostream>
using namespace std;
class Test{
    private:
    int b,c;
    public:
    int a;
    void hello()
    {
        cout<<"Hello"<<endl;
        b = 1;
        cout<<"B: "<<b<<endl;
    }
};
int main()
{
    Test z;
    z.a = 10;
    cout<<"value of a is: "<<z.a<<endl;
    z.hello();
}