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
};
int Test :: a = 51;
int main(){
    cout<<"initial stage: "<<Test::a<<endl;
    Test t,s,c,g,h;
    cout<<"initial stage: "<<Test::a<<endl;
}