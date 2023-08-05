#include<iostream>
using namespace std;
class Test{
    public:
    static int a;
    Test()
    {
        cout<<"Test class called...."<<endl;
        a++;
    }
    static int hello(){
        return a;
    }
};
int Test :: a = 51;
int main(){
    cout<<"initial stage: "<<Test::hello()<<endl;
    Test t,s,c,g,h,aa;
    cout<<"initial stage: "<<Test::hello()<<endl;
}