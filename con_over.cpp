#include<iostream>
using namespace std;
class shape{

    public:
    shape(int a){
        cout<<"area of circle is: "<<3.14*a*a<<endl;
    }
    shape(double l){
        cout<<"area of square is: "<<l*l<<endl;
    }
    shape(int l,int w){
        cout<<"area of ractangle is: "<<l*w<<endl;
    }
    shape(double h, double b){
        cout<<"area of tringle is: "<<(h*b)/2<<endl;
    }
};
int main(){
    shape circle(7),square(3.4),ractangle(4,6),tringle(12.3,15.5);
}