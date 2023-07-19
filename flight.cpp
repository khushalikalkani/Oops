#include<iostream>
using namespace std;
class Flight{
    private:
    int flightnumber;
    string destination;
    float distance,fuel;

    int calfuel(){
       if (distance<=1000){
        return 500;
       }
       else if(distance > 1000 && distance <= 2000){
        return 1100;
       }
       else if(distance >= 2000){
        return 2200;
       }

    }

    public:
    int feedinfo(){
        cout<<"Enter a fightnumber: "<<endl;
        cin>>flightnumber;
        cout<<"Enter a destination: "<<endl;
        cin>>destination;
        cout<<"Enter a distance: "<<endl;
        cin>>distance;
        fuel = calfuel();
    }

    int showinfo(){
          cout<<"flightnumber"<<"\t"<<"destination"<<"\t"<<"distance"<<"\t"<<"fuel"<<endl;
        cout<<flightnumber<<"\t\t"<<destination<<"\t\t"<<distance<<"\t\t"<<fuel;
    }
};
int main(){
   
   Flight f;
   f.feedinfo();
   f.showinfo();
    
}