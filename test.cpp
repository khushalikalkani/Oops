#include<iostream>
using namespace std;
class Test{
    private:
    int testcode, nocandidates, centerreqd;
    string discription;

    int CALCNTR(){
        return (nocandidates/100+1);
    }

    public:
    int SCHEDULE(){
        cout<<"Enter a testcode: ";
        cin>>testcode;
        cout<<"Enter a discription: "<<endl;
        cin>>discription;
        cout<<"Enter a nocandidates: "<<endl;
        cin>>nocandidates;

        centerreqd = CALCNTR();
    }

    int DESPTEST()
    {
        cout<<"testcode"<<"\t"<<"discription"<<"\t"<<"nocandidates"<<"\t"<<"centerreqd"<<endl;
        cout<<testcode<<"\t\t"<<discription<<"\t\t"<<nocandidates<<"\t\t"<<centerreqd<<endl;
    }
};
int main(){
    Test t;
    t.SCHEDULE();
    t.DESPTEST();
}