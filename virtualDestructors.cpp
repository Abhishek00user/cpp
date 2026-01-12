
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
A *p=new B;  //the new object of B class will contain both variable b and a and the pointer 
// will point to them .So it's important to delete both a and b while destroying the object 
p->f1();
delete p; //while deleting this ptr, if we didn't declared the destructor of base class as virtual then 
// early binding would take place and due to this only base destructor would run and due to not running of derived
// class destructor ,memory leak can occur.Ideally we want both the destructor to be called for handling memory leak
// in order to run both the destructor we want late binding of the destructor. after declaring virtual ,the address
// of the pointer would be considered. So,destructor of B will be called first after that since it's  inherited so
//  destructor of A class will also be called  
return 0;
}