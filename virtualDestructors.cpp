
#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void f1(){
        cout<<"f1 of A executed"<<endl;
    };
    
    virtual ~A(){  //on declaring virtual,all destructors of child classes will also become virtual
        cout<<"Destructor of A class executed";
    }
};
class B:public A{
    int b;
    public:
    void f2(){};
    ~B(){  //already virtual
        cout<<"Destructor of B class executed"<<endl;
    }
};
int main(){
    // Because p is of type A*, it can only access members of class A.
A *p=new B;  //this is a base class pointer pointing to derived cls obj and  the new object of B  will contain both vars
//  b and a and the pointer  will point to them .So it's important to delete both a and b while destroying the object 
p->f1();
delete p; //while deleting this ptr, if we didn't declared the destructor of base class as virtual then 
// early binding would take place and due to this only base destructor would run and due to not running of derived
// class destructor ,memory leak can occur.Ideally we want both the destructor to be called for handling memory leak
// in order to run both the destructor we want late binding of the destructor. after declaring virtual ,the address
// of the pointer would be considered. So,destructor of B will be called first after that since it's  inherited so
//  destructor of A class will also be called  
return 0;
}
//during early binding the type of pointer will be considered during compile time since pointer is of A type then 
// only destructor of A class will get called and B's destructor would not be called which will lead to memory leak
// but during runtime actual object type (B) is detected and derived destr gets called first and then base destr
// runs ensuring no memory leak

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
