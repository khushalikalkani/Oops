#include<iostream>
using namespace std;
class Number{
    int a,b;
    public:
    void setData(int x, int y){
        a = x, b = y;
    }
   // void getData(){
      //  cout<<"Largest Number is: "<<a<<endl;
   // }
    friend Number find(Number, Number);
};

Number find(Number x, Number y){
    Number t;
    if(x.a>y.b){
         cout<<x.a<<"is largest number"<<endl;
    }
    else{
        cout<<x.b<<"is largest number"<<endl;
    }
    return t;
}

int main(){
    Number c,d;
    c.setData(2,3);
    
}