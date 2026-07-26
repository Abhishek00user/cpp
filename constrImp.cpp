// 1-> WHENEVER DERIVED CLASS CHILD CREATED THEN BASE CLASS CONSTRUCTOR(WITH NO PARAMETER) WILL ALWAYS GET CALLED AND 
// ALSO CALLED FIRST
// 2-> Order of execution of constructor -> Base to Derived

#include<iostream>
using namespace std;
class Base{
    public:
    int a,b;
    Base(){
        a=0;
        b=0;
        cout<<"Normal constr called from base"<<endl;
    }
    Base(int x,int y){
        a=x;
        b=y;
        cout<<"parameterized from base called"<<endl;
    }
};
class derived : public Base{
    public:
    derived(){
        cout<<"normal constr from derived called"<<endl;
    }
    derived(int x,int y){
        a=x;
        b=y;
        cout<<"parameterized from derived called"<<endl;
    }
};

// 3 -> If the base class has no default constructor, the derived class must explicitly call it ,otherwise compilation error 
// Every derived object contains a base-class subobject, and the base subobject must be fully constructed before the 
// derived part is initialized. If the base class doesn't have a default constructor, the compiler cannot automatically
//  initialize it, so the derived class must explicitly specify which base constructor to invoke using the constructor initialization list
class Base2 {
public:
    Base2(int x) {
        cout << "Base2: " << x << endl;
    }
};

class Derived2 : public Base2 {
public:
    Derived2() : Base2(10) {  // since base cls has no default constr,so we must tell which base constr to call 
        cout << "Derived2\n";
    }
};

int main(){

    derived d;      // BASE CONSTR WITH NO PARAMETER CALLED FIRST THEN DERIVED CONSTR
    derived(8,4);   // SAME
    Derived2 d2;
    return 0;
}

