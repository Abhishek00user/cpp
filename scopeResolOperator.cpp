// Accessing Global Entities from Within a Namespace or Class
#include <iostream>

int x = 10;

class MyNamespace {
    private:
    int x = 20;
    public:
    void printX() {
        std::cout << "Local x: " << x << std::endl; // Accessing local x
        std::cout << "Global x: " << ::x << std::endl; // Accessing global x
    }
};

int main() {
    MyNamespace obj;
    obj.printX();
    return 0;
}


// Accessing Static Members of a Class
#include <iostream>

class MyClass {
public:
    static int staticVar;
};

int MyClass::staticVar = 100; // Definition

int main() {
    std::cout << "Static variable value: " << MyClass::staticVar << std::endl;
    return 0;
}

// Defining Member Functions Outside the Class Definition:#include <iostream>

class MyClass {
public:
    void myFunction(); // Declaration
};

void MyClass::myFunction() { // Definition
    std::cout << "This is MyClass::myFunction()" << std::endl;
}

int main() {
    MyClass obj;
    obj.myFunction();
    return 0;
}

// Accessing Nested Classes
#include <iostream>

class Outer {
public:
    class Inner {
    public:
        void innerFunction() {
            std::cout << "This is Inner::innerFunction()" << std::endl;
        }
    };
};

int main() {
    Outer::Inner obj;
    obj.innerFunction();
    return 0;
}
