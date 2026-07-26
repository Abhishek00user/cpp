//  A **virtual destructor** ensures that when an object is deleted through a **base class pointer**, the **derived class destructor
//  is called first**, followed by the base class destructor so that memory leak(memory which can't be accessed) don't occur
//  Memory leak can occur when we create an object and the obj has pointer pointing to a memory ,but we delete that obj without releasing memory
#include<iostream>
using namespace std;
class A{
    int a;
    public:
    virtual ~A(){  //on declaring virtual,all destructors of child classes will also become virtual
        cout<<"Destructor of A class executed";
    }
};
class B:public A{
    int *data;
    public:
    B(){
        data  = new int[3];
    }
    ~B(){  //already virtual
        delete[] data;
    }
};
int main(){
    // Because p is of type A*, it can only access members of class A.
    A *p=new B;  // base class pointer pointing to derived cls obj 

    delete p; //while deleting this ptr, if we didn't declared the destructor of base class as virtual then 
    // early binding would take place and type of pointer would be considered during compile time due to this only base destructor would run and due to this memory leak can
    //  occur(as array of 3 not freed).Ideally we want both the destructor to be called for handling memory leak
    // in order to run both the destructor we want late binding of the destructor. after declaring virtual ,the address
    // of the pointer would be considered. So,destructor of B will be called first after that since it's  inherited so
    //  destructor of A class will also be called  
    return 0;
}
// WITHOUT USING VIRTUAL
class Base {
public:
    ~Base() {
        cout << "Base destructor\n";
    }
};

class Derived : public Base {
public:
    int* data;

    Derived() {
        data = new int(10);  // resource allocated and this will not get deleted due to compile time polymorphism
    }

    ~Derived() {
        delete data;        // resource freed
        cout << "Derived destructor\n";
    }
};
