#include<iostream>
using namespace std;
class solid{

    public:
    void shape(int a){
        cout<<"area of cube is: "<<a*a*a<<endl; 
    }
    void shape(int r,int h){
        cout<<"area of cylinder is: "<<3.14*(r*r)*h<<endl; 
    }
    void shape(int l,int w, int h){
        cout<<"area of cuboid is: "<<l*w*h<<endl; 
    }
    void shape(double b,double h){
        cout<<"area of prism is: "<<b*h<<endl; 
    }

};
int main(){
    solid s;
    s.shape(4);
    s.shape(6,12);
    s.shape(5,8,13);
    s.shape(12.5,4.9);
}