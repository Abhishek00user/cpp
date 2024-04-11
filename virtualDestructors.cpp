// #include <iostream>

// class Base {
// public:
//     Base() {
      
//     }
//     virtual ~Base() {
//         std::cout << "Base destructor\n";
//     }
//     virtual void someFunction() {
//         std::cout << "Base someFunction\n";
//     }
// };

// class Derived : public Base {
// public:
//     Derived() {
       
//     }
//     ~Derived() {
//         std::cout << "Derived destructor\n";
//     }
//     void someFunction() override {
//         std::cout << "Derived someFunction\n";
//     }
// };

// int main() {
//     // create an object of Derived through a pointer to Base and then delete that pointer, the destructor of Derived is correctly called because Base's destructor is virtual. If Base's destructor were not virtual, then only Base's destructor would be called, which could lead to undefined behavior and resource leaks.
//     Base *ptr = new Derived();
//     ptr->someFunction();
//     delete ptr;
//     return 0;
// }



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
A *p=new B;  //the new object of B class will contain both variable b and a and the pointer
// will point to them .So it's important to delete both a and b while destroying the object 
p->f1();
delete p;  //on deleting the pointer ,due to late binding ,type of pointe will be taken 
// into consideration ,and it's of B type.So,destructor of B will be called first after that
// since it's  inherited so desctructor of A class will also be called  
return 0;
}