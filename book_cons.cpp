#include<iostream>
using namespace std;
class Book{
    private:
    int bookno;
    char title[20];
    float price;
    float total_cost(int n){
        return price * n;
    }

    public:
        Book(){
        cout<<"Enter a book number: "<<endl;
        cin>>bookno;
        cout<<"Enter a book title: "<<endl;
        cin>>title;
        cout<<"Enter a book price: "<<endl;
        cin>>price;
    }

    int PURCHASE(){
        int n;
        cout<<"Enter a number of copies: "<<endl;
        cin>>n;
        float totalcost = total_cost(n);
        cout<<"Total cost to paid: "<<totalcost<<endl;
    }
};
int main(){
    Book b;
    b.PURCHASE();
}