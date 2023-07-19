#include<iostream>
using namespace std;
class student
{
    private:
    int admno;
    char arr[20];
    float eng, math, science, total;
    float ctotal()
    {
         
        return eng + math + science;
    }
    public:
    int takeData(){
        cout<<"Enter a admno: "<<endl;
        cin>>admno;
        cout<<"Enter a student name: "<<endl;
        cin>>arr;
        cout<<"Enter a english marks: "<<endl;
        cin>>eng;
        cout<<"Enter a math marks: "<<endl;
        cin>>math;
        cout<<"Enter a science marks: "<<endl;
        cin>>science;
        total = ctotal();
    }
    int showData(){
        cout<<"admno"<<"\t"<<"sname"<<"\t"<<"eng"<<"\t"<<"math"<<"\t"<<"sci"<<"\t"<<"total"<<endl;
        cout<<admno<<"\t"<<arr<<"\t"<<eng<<"\t"<<math<<"\t"<<science<<"\t"<<total<<"\t";
    }

};
int main()
{
    student test;
    test.takeData();
    test.showData();
}