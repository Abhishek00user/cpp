#include<iostream>
using namespace std;
// the base class pointer can point to derived cls obj because der cls obj contains a complete base cls subobj,so treating the der
// obj as its base type is safe as it follows the IS-A relationship. ex - dog is an animal always but animal is not dog always. so 
// only base cls pointer should point to der cls obj
class Animal {
    public:
        virtual void sound() {
            cout << "Animal Sound\n";
        }
};

class Dog : public Animal {
    public:
        void sound() override {
            cout << "Bark\n";
        }
};

class Cat : public Animal {
    public:
        void sound() override {
            cout << "Meow\n";
        }
};
 int main() {
    Animal* ptr;

    Dog d;
    Cat c;
    // the same pointer can work with different objects without this feature runtime polymorph would not be possible
    ptr = &d;
    ptr->sound();

    ptr = &c;
    ptr->sound();
    return 0;
 }

//  If an interviewer asks:

// Why can a base-class pointer point to a derived-class object?

// You can answer:

// "A derived-class object contains a complete base-class subobject, so treating the derived object as its base type is safe. This follows the IS-A 
// relationship in inheritance. It enables runtime polymorphism, where a single base-class pointer can refer to different derived objects and invoke 
// the appropriate overridden functions through virtual dispatch."

// The pointer's value is the address of the complete Dog object.
// Its static type is Animal*, so it can access only the Animal interface directly.
// If virtual functions are used, the call is dynamically dispatched to the appropriate Dog implementation at runtime.