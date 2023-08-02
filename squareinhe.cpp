#include<iostream>
using namespace std;
class square{
   
    public:
    int a;
    void number()
    {
        cout<<"Enter a n number: ";
        cin>>a;
    }
};
class root : public square
{
    public:
    int sum;
    void get()
    {
       for(int i = 1; i<=a; i++){
        sum = i*i;
        cout<<sum<<"\t";
       }
    }
};
int main()
{
    root r;
    r.number();
    r.get();
}