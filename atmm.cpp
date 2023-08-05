#include<iostream>
using namespace std;
class ATM{
    public:
    int a = 1000,sum,b;
    int credited(){
        cout<<"Enter a credit value: "<<endl;
        cin>>b;
        sum = a+b;

    }
    int withdrew(){
        cout<<"Enter a withdraw value: "<<endl;
        cin>>a;
    }
    int showbalance(){
        cout<<a<<endl;
    }

};
int main(){
    ATM t;
    int x;
    do{
        cout<<"1. credit"<<endl;
        cout<<"2. withdraw"<<endl;
        cout<<"3. showbalance"<<endl;
        cout<<"4. exit"<<endl;

        cout<<"Enter your choice: "<<endl;
        cin>>x;

        switch(x){
            case 1:
                t.credited();
            break;
            case 2:
                t.withdrew();
            break;
             case 3:
                t.showbalance();
            break;
             default:
            break;

        }
    }while(x==0);
}