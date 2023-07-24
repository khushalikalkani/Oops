#include<iostream>
using namespace std;
class Number{
    int real, img;
    public:
    void setdata(int a, int b)
    {
        real = a, img = b;
    }
    void getdata()
    {
        cout<<"number is: "<<real<<" + "<<img<<"i"<<endl;
    }
    Number operator++(){
        Number t;
        t.real = ++real;
        t.img = ++img;
        return t;
    }
     Number operator++(int){
        Number t;
        t.real = real++;
        t.img = img++;
        return t;
    }
  
};
int main()
{
    Number n,m;
  
    n.setdata(2,5);
    n.getdata();

    m = ++n;
    m.getdata();
    
    n++;
    m = n;
    m.getdata();
   
}