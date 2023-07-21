#include<iostream>
using namespace std;
class shape{

    public:
    void test(int a){
        cout<<"area of circle is: "<<3.14*a*a<<endl;
    }
    void test(double l){
        cout<<"area of square is: "<<l*l<<endl;
    }
    void test(int l,int w){
        cout<<"area of ractangle is: "<<l*w<<endl;
    }
    void test(double h, double b){
        cout<<"area of tringle is: "<<(h*b)/2<<endl;
    }

};
int main(){
    shape s;
    s.test(7);
    s.test(3.4);
    s.test(4,6);
    s.test(12.3,15.5);
}