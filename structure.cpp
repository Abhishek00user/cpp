// using struct with oops (used encapsulation here as we bind variables and functions)
#include<iostream>
#include<string>
using namespace std;

struct book{
    private:
        int bookid;
        string title;
        int price;
    public:
        void input(){
            cout<<"Enter bookid,price and title : "<<endl;
            cin>>bookid>>price;
            if(bookid<0) bookid = -bookid;
            cin.ignore(); //To remove the leftover newline (\n) from the input buffer when mixing >> and getline()
            getline(cin,title);  // using getline with string (no use of cin.getline)
        }
        void display(){
            cout<<bookid<<" "<<title<<" "<<price;
        }
};
int main(){
    book b1;
    b1.input();
    b1.display();
return 0;
}
