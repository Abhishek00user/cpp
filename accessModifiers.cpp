#include<iostream>
using namespace std;


class Base {
public:
    int a;
protected:
    int b;
private:
    int c;
};

class Derived : public Base {
    void func() {
        a = 10;  // ✅ accessible (public)
        b = 20;  // ✅ accessible (protected)
        // c = 30; // ❌ inaccessible (private)
    }
};
// class Derived : public Base {
// public:
//     void fun(Base bas) {
//         bas.b = 10;   // ❌ ERROR as protected members can't be accessed Through Base Class Object Inside Derived Class
//     }
// };

class Derived2 : protected Base {
    void func() {
        a = 10;  // ✅ now protected
        b = 20;  // ✅ remains protected
        // c = 30; // ❌ still inaccessible
    }
};

class Derived3 : private Base {
    void func() {
        a = 10;  // ✅ now private
        b = 20;  // ✅ now private
        // c = 30; // ❌ inaccessible
    }
};



int main(){
Base b1;
// cout<<b1.b;  //protected var not accessible
Derived d1;
d1.a=10; //No error as a is public in derived
// d1.b=5; not possible as b is protected
Derived2 d2;
// d2.a = 5;  // ❌ Error: a is protected now
Derived3 d3;
// d3.a = 5;  // ❌ Error: a is private

return 0;
}