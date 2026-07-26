//  They Make a class abstract while still ensuring base-class destructor is invoked when a derived cls obj is deleted by base cls ptr
// even if we used no pre virtual function , class can be made abstract by only pure virtual destructors
// if class already have a pure virtual function then making the destruct pure virtual becomes optional . keeping it only virtual would also do the 
// same work. 

// ## 🔹 When to Use What?
// ✔ Use **virtual destructor** → when base class is used polymorphically  
// ✔ Use **pure virtual destructor** → when base class should not be instantiated

// another example
#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor\n";
    }
    virtual ~Base() = 0; // Pure virtual destructor
    virtual void someFunction() = 0; // no need of it as line 15 also a pure virtual function
};

Base::~Base() {  // must be defined 
    std::cout << "Base destructor\n";
}

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor\n";
    }
    ~Derived(){
        std::cout << "Derived destructor\n";
    }
    void someFunction() override {
        std::cout << "Derived someFunction\n";
    }
};

int main() {
    // Base *ptr = new Base(); // Error: Cannot instantiate abstract class
    Base *ptr = new Derived();
    ptr->someFunction();
    delete ptr;
    return 0;
}

// You cannot instantiate objects of an abstract class, so attempting to create a Base object directly (new Base())
//  would result in a compilation error. Instead, you can create objects of derived classes, as demonstrated by Derived
//  in the example. When you  delete a pointer to the base class, the destructor of the derived class is properly
//  called due to the virtual   destructor in the base class.
