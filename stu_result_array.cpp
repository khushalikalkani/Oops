#include<iostream>
using namespace std;
class Result{
    int guj, sci, eng, math,total=0,percentage;
    public:
    void marks(){
        cout<<"Enter a guj marks: ";
        cin>>guj;
        cout<<"Enter a sci marks: ";
        cin>>sci;
        cout<<"Enter a eng marks: ";
        cin>>eng;
        cout<<"Enter a maths marks: ";
        cin>>math;
    }
    
    void totalmarks(){
        total = guj+sci+eng+math;
        
    }
    void per(){
        percentage = total/3;
    }
    void grade(){
        if()
    }
    void getmarks(){
       
        cout<<guj<<"\t"<<sci<<"\t"<<eng<<"\t"<<math<<"\t"<<total<<"\t"<<percentage<<endl;
    }

    
};
int main(){
    Result a[5];
    int i;
    for(i=0;i<2;i++){
        a[i].marks();
       
        
    }
     for(i=0; i<2; i++){
        a[i].totalmarks();
    }
    for(i=0; i<2; i++){
        a[i].per();
    }
    cout<<"gujrati\t"<<"science\t"<<"english\t"<<"maths\t"<<"total\t"<<"percentage\t"<<endl;
    for(i=0; i<2; i++){
        a[i].getmarks();
    }
    
}