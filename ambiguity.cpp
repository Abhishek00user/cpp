#include<iostream>
using namespace std;

// Ambiguity 1
class Base1{
    public:
        void greet(){
            cout<<"How are you from Base1"<<endl;
        }
};

class Base2{
    public:
        void greet()
        {
            cout << "Kaise ho from Base2" << endl;
        }
};
// when a class inherits from two parent classes and both have the same function name then ambiguity arises
class Derived : public Base1, public Base2{
   int a;
   public:
    void greet(){
        Base2 :: greet();
    }
};


// ambiguity scenario 2 but here ambiguity is automatically solved by compiler 
class B{
    public:
        void say(){
            cout<<"Hello world from class B"<<endl;
        }
};

class D: public B{
    int a;
    // D's new say() method will override base class's say() method
    public:
        void say()
        {
            cout << "Hello my beautiful people from class D" << endl;
        }
};

int main(){
  // Ambiguity 1
     Base1 base1obj;
     Base2 base2obj;
     base1obj.greet();
     base2obj.greet();
     Derived der;
     der.greet();

    // Ambiguity 2
    B b;
    b.say();

    D d;
    d.say();

    return 0;
}
