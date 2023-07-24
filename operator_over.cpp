#include<iostream>
using namespace std;
class Box{
    int l, w, h;
    public:
    void setData(int a, int b, int c){
        l = a, w = b, h = c;
    }
    double getdata(){
        return l*w*h;
    }
    Box operator% (Box &n)
    {
        Box t;
        t.l = l % n.l;
        t.w = w % n.w;
        t.h = h % n.h;
        return t;
    }

};
int main()
{
    Box a,b,c;
    a.setData(10,10,10);
    cout<<"Volume of Box A is"<<a.getdata()<<endl;
    b.setData(4,4,4);
    cout<<"Volume of Box B is"<<b.getdata()<<endl;
    c = a % b;
    cout<<"volume of Box C is"<<c.getdata()<<endl;
}