#include<iostream>
using namespace std;
class ATM{
    public:

    int balance = 1000, Accno;
    float deposit, withdraw, display;
    string name;

    void account(){
        cout<<"Enter your account number: "<<endl;
        cin>>Accno;

        cout<<"Enter account holder number: "<<endl;
        cin>>name;
    }
    void _deposit(){
        cout<<"\n"<<"Enter deposit amount: "<<endl;
        cin>>deposit;
        balance += deposit;

    }
    void _withdraw(){
        cout<<"\n"<<"Enter withdraw amount: "<<endl;
        cin>>withdraw;
        if(balance >= withdraw)
        {
            balance -= withdraw;
        }else{
            cout<<"sorry less balance in your account"<<"\n"<<endl;
        }
    }
    void _display(){
        cout<<"Your Account balance is: "<<balance<<"\n"<<endl;
    }

};
int main(){
    ATM t;
    t.account();
    int x;
    do{
        cout<<"\n"<<"1. credit"<<endl;
        cout<<"2. withdraw"<<endl;
        cout<<"3. showbalance"<<endl;
        cout<<"4. exit"<<endl;
        
        cout<<"Enter your choice: "<<endl;
        cin>>x;

        switch(x){
            case 1:
                t._deposit();
            break;
            case 2:
                t._withdraw();
            break;
             case 3:
                t._display();
            break;
             case 4:
            break;

        }
    }while(x!=4);
}