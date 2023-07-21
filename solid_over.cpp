#include<iostream>
using namespace std;
class solid{
    public:
    solid(int a){
        cout<<"area of cube is: "<<a*a*a<<endl; 
    }
    solid(int r,int h){
        cout<<"area of cylinder is: "<<3.14*(r*r)*h<<endl; 
    }
    solid(int l,int w, int h){
        cout<<"area of cuboid is: "<<l*w*h<<endl; 
    }
    solid(double b,double h){
        cout<<"area of prism is: "<<b*h<<endl; 
    }
};
int main(){
    solid cube(4),cylinder(6,12),cuboid(5,8,13),prism(12.5,4.9);
}