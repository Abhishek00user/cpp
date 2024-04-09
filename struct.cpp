#include <iostream>
#include <cstring>
#include<conio.h>
using namespace std;
struct book{
    int bookid;
    char title[20];
    int price;
};

// declaration of the functions
void display(book);
book input();
 int main(){
    // book b1={140,"C++ by saurabh ",456};
    // book b2,b3;
    // b2.bookid=123;
    // // b2.title="C++ made easy";   error thrown
    // strcpy(b2.title,"C++ made easy");  //for defining a string in char array
    // b2.price=900;
    // b2=b3;

    book b1;
    b1=input();
    display(b1);

    return 0;
 }
// creating a function by passing structure as an argument
void display(book b){
    cout<<b.bookid<<" "<<b.title<<" "<<b.price;
}
    // creating a function which return structure
book input(){
    book b;  //the size of variable b will be 28 bytes
    cout<<"Enter the details"<<endl;
    cin>>b.bookid>>b.price>>b.title;
    return (b);
}