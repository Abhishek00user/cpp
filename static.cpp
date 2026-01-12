
// static members and functions

#include<iostream>
using namespace std;

class myClass{
    public:
    static int count;  //count will be shared among all the instances of the myClass
    myClass(){
        count++;
    }
    // static function to access static data members
   static void getCount(){
        cout<<"count is :"<<count<<endl;
    }
};
// needs to be declared outside the class also
int myClass::count;  //the memory of this variable doesn't depend on the object that's why
// it is known as class variable.THis line is crucial for the creation of count var and
//  memory distribution to count
int main(){

    myClass o1;
    // static functions are called by using class name not instances
    myClass::getCount();
    myClass o2;
    myClass::getCount();
    myClass o3;
    myClass::getCount();

// we are accessing the count directly 
    cout<<"Total no of objects created : "<<myClass::count<<endl; //this method of access
    // is only right if the static member variable is public, for the private we have to c
    // create a function for the accessing
return 0;
}