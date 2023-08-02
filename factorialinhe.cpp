#include<iostream>
using namespace std;
class fact{
    public:
    int a;
    void number(){
    cout<<"Enter a n number:";
    cin>>a;
    }
};

class factorial : public fact{
    public:
    int facto = 1;
    void factoriall()
    {
    for(int i=a; i>=1; i--)
    {
        facto*=i;
    }
    cout<<facto;
  }
}; 

int main(){
    factorial f;
    f.number(); 
    f.factoriall();
}