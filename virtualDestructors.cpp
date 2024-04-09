#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor\n";
    }
    virtual ~Base() {
        std::cout << "Base destructor\n";
    }
    virtual void someFunction() {
        std::cout << "Base someFunction\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor\n";
    }
    ~Derived() {
        std::cout << "Derived destructor\n";
    }
    void someFunction() override {
        std::cout << "Derived someFunction\n";
    }
};

int main() {
    // create an object of Derived through a pointer to Base and then delete that pointer, the destructor of Derived is correctly called because Base's destructor is virtual. If Base's destructor were not virtual, then only Base's destructor would be called, which could lead to undefined behavior and resource leaks.
    Base *ptr = new Derived();
    ptr->someFunction();
    delete ptr;
    return 0;
}
