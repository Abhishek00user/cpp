#include<iostream>
using namespace std;

// class A{
//     private:
//     int a;
//     protected:
//     void setValue(int k){
//         a=k;
//     }
// };

// class B:public A{
//     public:
//     void setData(int x){
//         // a=x; //it will throw error as the derived class can't use private var of base class
//         setValue(x);
//     }
// };

class Base {
public:
    void display() {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        display(); // ✅ Accessible here
    }
};

class Base1 {
protected:
    void secret() {
        cout << "Secret function" << endl;
    }
};

class Derived1 : public Base1 {
public:
    void reveal() {
        secret(); // ✅ Accessible only from here only, not from  the main(outside) because it is protected
    }
};

class Base2 {
private:
    void hidden() {
        cout << "Can't access this in Derived" << endl;
    }
};

class Derived2 : public Base2 {
public:
    void tryAccess() {
        // hidden(); ❌ Error: not accessible
    }
};


int main(){
Derived d;
d.display(); //if func is public in base class then it can always access it

Derived1 d1;
d1.reveal();
// d1.secret(); it will throw error because secret function is protected in base class , so we can't use it from outside
return 0;
}