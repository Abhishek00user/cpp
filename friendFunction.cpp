
// Demonstration for friend function 

#include<iostream>
using namespace std;

class myClass{
    private:
    int value;
    public:
    myClass(int val){
        value=val;
    }

// declaring the display function as the friend of myClass and passing the  reference as arguments
    friend void display(myClass&);   //can also write myClass& obj
};
// defining the function which will use the private member of myClass
  void display(myClass& obj){
    cout<<"The value of the object created is "<<obj.value<<endl;
}

int main(){
 myClass object1(20);
 display(object1);  // we are not using obj1.display() because display is a friend function not member function
//  so it was called like a normal function 
 
return 0;
}