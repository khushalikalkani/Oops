#include<iostream>
using namespace std;
class Rect{
    int l, b;
    
    public:
    void setData(int x, int y){
        l = x, b = y;
    }
    void getData(){
        cout<<"Area is: "<<l*b<<endl;
    }
    friend Rect add(Rect, Rect, Rect);
};

Rect add(Rect x, Rect y, Rect z){
    Rect t;
    t.l = x.l+y.l+z.l;
    t.b = x.b+y.b+z.b;
    return t;
}
int main()
{
    Rect a,b,c,d;
    a.setData(2,3);
    a.getData();
    b.setData(4,5);
    b.getData();
    d.setData(3,3);
    d.getData();

    c = add(a,b,d);
    c.getData();
}