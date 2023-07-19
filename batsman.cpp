#include<iostream>
using namespace std;
class batsman
{
    private:
    int bcode;
    char name[20];
    int innings, notout, runs;
    float batavg;

    float calcavg(){
      return  runs/(innings-notout);
    }

    public:
    float readData(){
        cout<<"Enter a bcode: ";
        cin>>bcode;
        cout<<"Enter a batsman name: "<<endl;
        cin>>name;
        cout<<"Enter a innings: "<<endl;
        cin>>innings;
        cout<<"Enter a notout: "<<endl;
        cin>>notout;
        cout<<"Enter a runs: "<<endl;
        cin>>runs;
        batavg = calcavg();
     }

     float displayData(){
        cout<<"bcode"<<"\t"<<"name"<<"\t"<<"innings"<<"\t"<<"notout"<<"\t"<<"runs"<<"\t"<<"batavg"<<endl;
        cout<<bcode<<"\t"<<name<<"\t"<<innings<<"\t"<<notout<<"\t"<<runs<<"\t"<<batavg<<endl;
     }
};
int main(){
    batsman man;
    man.readData();
    man.displayData();
}