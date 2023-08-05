#include<iostream>
using namespace std;
class ATM{
    int a = 1000;
    int credited(){
        cout<<"Enter a credit value: "<<endl;
        cin>>a;
    }

};
int main(){
    ATM t;
    int x;
    do{
        cout<<"1. credit"<<endl;
        cout<<"2. withdraw"<<endl;
        cout<<"3. showbalance"<<endl;
        
        cout<<"Enter your choice: "<<endl;
        cin>>x;

        switch(x){
            case 1:
                t.credited();
            break;
            case 2:
                withdrew();
            break;
             case 3:
                showbalance();
            break;
             case 4:
            break;

        }
    }while(x!=0);
}