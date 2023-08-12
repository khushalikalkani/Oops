#include<iostream>
using namespace std;
class restaurant{
    public:
    string name;
    string itemname;
    int  qty[6], totalbill, total_bill = 0, discount, cgst, sgst;
    int samosa = 20, puff = 40, vadapau = 50, frankee = 50, masalapuff = 60, soup = 40, mobilenumber,test[10],x;
    void items()
    {
        cout<<"====================================="<<endl;
        cout<<"\t"<<"SHIVA HOTEL & RESTURANT"<<endl;
        cout<<"====================================="<<endl;

        cout<<"--------------- "<<"MENU"<<" ----------------"<<endl;
        cout<<"\n"<<"NO."<<"\t\t"<<"ITEM"<<"\t\t"<<"PRICE"<<endl;

        cout<<"1."<<"\t\t"<<"soup"<<"\t\t"<<soup<<endl;
        cout<<"2."<<"\t\t"<<"Samosa"<<"\t\t"<<samosa<<endl;
        cout<<"3."<<"\t\t"<<"puff"<<"\t\t"<<puff<<endl;
        cout<<"4."<<"\t\t"<<"vadapau"<<"\t\t"<<vadapau<<endl;
        cout<<"5."<<"\t\t"<<"frankee"<<"\t\t"<<frankee<<endl;
        cout<<"6."<<"\t\t"<<"masalapuff"<<"\t"<<masalapuff<<endl;

    }
    void customer(){
        cout<<"\n"<<"Enter customer name: "<<endl;
        cin>>name;
        cout<<"Enter mobile number: "<<endl;
        cin>>mobilenumber;
    }
    };

int main()
 {
    restaurant r;
    r.items();
    r.customer();
    void order(){
        
        cout<<"\n"<<"----------- "<<"PLEASE ORDER"<<" ------------"<<endl;
        do{
            cout<<"\n"<<"Enter a dish number"<<"\n";
            cin>>x;

            switch(x){
                case 1:
                cout<<"Enter a quantity: ";
                cin>>qty;
                cout<<"name"<<"\t\t"<<"qty"<<"\t"<<"price"<<"\t"<<"total"<<endl;
                cout<<"soup"<<"\t\t"<<qty<<"\t"<<soup<<"\t"<<soup*qty;
               // test[1] = cout<<qty<<soup<<soup*qty;
                total_bill += (soup*qty);
                break;

                case 2:
                cout<<"Enter a quantity: ";
                cin>>qty;
                cout<<"name"<<"\t\t"<<"qty"<<"\t"<<"price"<<"\t"<<"total"<<endl;
                cout<<"samosa"<<"\t\t"<<qty<<"\t"<<samosa<<"\t"<<samosa*qty;
                 total_bill += (samosa*qty);
                break;

                case 3:
                cout<<"Enter a quantity: ";
                cin>>qty;
                cout<<"name"<<"\t\t"<<"qty"<<"\t"<<"price"<<"\t"<<"total"<<endl;
                cout<<"puff"<<"\t\t"<<qty<<"\t"<<puff<<"\t"<<puff*qty;
                 total_bill += (puff*qty);
                break;

                case 4:
                cout<<"Enter a quantity: ";
                cin>>qty;
                cout<<"name"<<"\t\t"<<"qty"<<"\t"<<"price"<<"\t"<<"total"<<endl;
                cout<<"vadapau"<<"\t\t"<<qty<<"\t"<<vadapau<<"\t"<<vadapau*qty;
                 total_bill += (vadapau*qty);
                break;

                case 5:
                cout<<"Enter a quantity: ";
                cin>>qty;
                cout<<"name"<<"\t\t"<<"qty"<<"\t"<<"price"<<"\t"<<"total"<<endl;
                cout<<"frankee"<<"\t\t"<<qty<<"\t"<<frankee<<"\t"<<frankee*qty;
                 total_bill +=(frankee*qty);
                break;

                case 6:
                cout<<"Enter a quantity: ";
                cin>>qty;
                cout<<"name"<<"\t\t"<<"qty"<<"\t"<<"price"<<"\t"<<"total"<<endl;
                cout<<"masalapuff"<<"\t"<<qty<<"\t"<<masalapuff<<"\t"<<masalapuff*qty;
                 total_bill += (masalapuff*qty);
                break;

                case 7:
                break;

                default:
                    cout<<"please ! correct your dish number";
                 break;   
                };

                
        }while(x!=7);
         cout<<"----------- "<<"VIEW OF BILL"<<" ------------"<<endl;

        cout<<"\n"<<"TOTAL PRICE: \t\t\t"<<total_bill<<endl;

        discount = total_bill*10/100;
        cout<<"\n"<<"discount (10%)  :\t\t "<<discount<<endl;

        cgst = total_bill*2.5/100;
        cout<<"cgst(2.5 %)  :\t\t\t "<<cgst<<endl;

        sgst = total_bill*2.5/100;
        cout<<"sgst(2.5 %)  :\t\t\t "<<sgst<<endl;
        

        total_bill -= discount;
        total_bill += sgst;
        total_bill += cgst;

      
        cout<<"YOUR FINAL PAYMENT IS:\t\t"<<total_bill<<endl;

        cout<<"\n"<<"------------- "<<"THANK YOU"<<" -------------"<<endl;
    }
}                                             