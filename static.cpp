
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
int myClass::count;
int main(){

    myClass o1;
    // static functions are called by using class name not instances
    myClass::getCount();
    myClass o2;
    myClass::getCount();
    myClass o3;
    myClass::getCount();

// we are accessing the count directly 
    cout<<"Total no of objects created : "<<myClass::count<<endl;
return 0;
}