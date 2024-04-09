#include <iostream>

class Base {
public:
    virtual ~Base() = 0; // Pure virtual destructor
};

Base::~Base() {
    std::cout << "Base pure virtual destructor\n";
}

class Derived : public Base {
public:
    ~Derived() override {
        std::cout << "Derived destructor\n";
    }
};

int main() {
    // Base obj; // Error: Cannot instantiate abstract class
    Derived obj;
    return 0;
}
// In this example, Base contains a pure virtual destructor, but it still provides a function body for it. Derived provides its own destructor implementation, thus making it concrete and allowing it to be instantiated.


// another example
#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor\n";
    }
    virtual ~Base() = 0; // Pure virtual destructor
    virtual void someFunction() = 0; // Pure virtual function
};

Base::~Base() {
    std::cout << "Base destructor\n";
}

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor\n";
    }
    ~Derived() override {
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
// In this example, the Base class has a pure virtual destructor declared with virtual ~Base() = 0;. This makes Base an abstract class because it contains a pure virtual function. The Derived class inherits from Base and provides implementations for the pure virtual functions.

// You cannot instantiate objects of an abstract class, so attempting to create a Base object directly (new Base()) would result in a compilation error. Instead, you can create objects of derived classes, as demonstrated by Derived in the example. When you delete a pointer to the base class, the destructor of the derived class is properly called due to the virtual destructor in the base class.