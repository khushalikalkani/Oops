#include<iostream>
using namespace std;
class report{
    private:
    int admno;
    char name[20];
    float marks[5], average, sum = 0;
    void GETAVG(){
        for(int i = 0; i<5; i++){
            sum+=marks[i];
         }
        average = sum/5;
    }

    public:
    float Readinfo(){
        cout<<"Enter a admno.: "<<endl;
        cin>>admno;
        cout<<"Enter a name: "<<endl;
        cin>>name;
        cout<<"Enter a marks: "<<endl;
        for(int i = 0; i<5; i++){
            cin>>marks[i];
        }
        GETAVG();
    }
    void displayinfo(){

    cout<<"\n"<<"admno\t"<<"name\t"<<"adno\t"<<endl;
    cout<<"\n"<<admno<<"\t"<<name<<"\t"<<admno<<"\t"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<marks[i]<<endl;
    }
     cout<<"average:"<<average<<endl;
  }
};
  int main()
  {
    report m;
    m.Readinfo();
    m.displayinfo();
  }