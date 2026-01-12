// In C++, structures can have functions, constructors, access specifiers which c language doesn't support.
// Struct and class are almost identical in C++, except for default access specifier
// struct have public as default access modifier but class has private default specifier
#include <iostream>
#include <cstring>
#include<conio.h>
using namespace std;
struct book{
    int bookid;
    char title[20];
    int price;
};

book global; //global variable created or we can also add after } in 12th line

//mandatory declaration of the function
void display(book);
book input(); //defined later in the code for taking input 

 int main(){
    book b1={140,"C++ by saurabh ",456};
    book b2,b3;
    b2.bookid=123;
    // b2.title="C++ made easy";   error thrown as string can't be written in char array
    strcpy(b2.title,"C++ made easy");  //for defining a string in char array
    b2.price=900;
    // b2=b3;  wrong initialisation as b2 is already being initialised 
    b3=b2;
    cout<<"Title of b3:"<<b3.title<<endl;

    book b4;
    b4=input(); //whatever the input function will return will go into b1 so type of input function should also be of book
    display(b4);

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
    cin>>b.bookid>>b.price;
    
    cin.ignore();                 // clear buffer
    cin.getline(b.title, 20);     // read full string with spaces and cin.getline() works only with character arrays
    return (b);
}