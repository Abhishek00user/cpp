#include<iostream>
using namespace std;

class myClass {
private:
    int value;

public:
    // Constructor
    myClass(int val) {
        value = val;
    }

    // Getter method
    int getValue() {
        return value;
    }

    // Setter method
    void setValue(int val) {
        value = val;
    }
};

int main() {
    myClass obj(20);

    // Use getter
    cout << "Initial value: " << obj.getValue() << endl;

    // Use setter for modifying the value of a private variable afterward
    obj.setValue(50);
    cout << "Updated value: " << obj.getValue() << endl;

    return 0;
}
// usecase of getter and setter-
// Protect internal data from direct modification.
// Add validation logic before setting a value.
// Maintain object integrity and abstraction.

