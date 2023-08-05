#include<iostream>
using namespace std;
class Bank{
    int bal;
    string name;
    string type;
    public:
    void setdata(int bal, string name, string type){
        this->bal = bal;
        this->name = name;
        this->type = type;
    }
    void getdata(){
        cout<<"Account Holder name..."<<name<<endl;
         cout<<"Account type name..."<<type<<endl;
          cout<<"Account balance name..."<<bal<<endl;
    }
};
int main(){
    Bank b;
    b.setdata(1000,"Hello","Saving");
    b.getdata();
}