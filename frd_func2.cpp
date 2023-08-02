#include<iostream>
using namespace std;
class Number{
    int a,b;
    public:
    void setData(int x, int y){
        a = x, b = y;
    }
   void getData(){
       cout<<"Largest Number is: "<<endl;
   }
    friend Number find(Number);
};

Number find(Number x){
    Number t;
    if(x.a>x.b){
         cout<<x.a<<"is largest number"<<endl;
    }
    else{
        cout<<x.b<<"is largest number"<<endl;
    }
    
}

int main(){
    Number c,d;
   
    c.setData(2,3);
    c.getData();
    Number x;
    find = c.setData(2,3);
}