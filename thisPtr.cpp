#include<iostream> 
using namespace std; 

//  **`this` is an implicit pointer available inside non-static member functions that holds the address of the current calling object.**
// In short:
// > **`this` points to the object that invoked the member function.**

// Non-static member functions use the `this` pointer to know which object’s data to operate on, while static member
//  functions do not have a `this` pointer because they are not tied to any object.**
// ---

// ## 🔹 Why Does `this` Exist?
// Because:
// - Member functions are **shared among all objects**
// - Data members are **object-specific**
// - `this` tells the function **which object’s data to use**

// ---

// ## 🔹 What Exactly Does `this` Store?
// - The **address of the current object**
// - Type: `ClassName*`

// ---

// ## 🔹 Where is `this` Available?
// ✔ Inside **non-static member functions**  
// ❌ NOT available inside **static member functions**

// Reason:
// - Static functions do not belong to any object


#include <iostream>
using namespace std;

class Student {
    int id;                // non-static data member
    static int count;      // static data member

public:
    Student() {
        count++;
    }
    // non-static member function
    void setId(int id) {
        this->id = id;     // this points to the calling object
    }

    void showId() {
        cout << "ID: " << id << endl;
    }

    // static member function
    static void showCount() {
        cout << "Count: " << count << endl;
        // cout << id;     ❌ ERROR: no this pointer here as a non static member reference must be relative to a specific obj
    }
};

int Student::count = 0;

int main() {
    Student s1, s2;

    s1.setId(101);   // this → s1, here 101 is getting stored as id of caller obj (s1)
    s2.setId(202);   // this → s2
	// Same function, different objects — this decides which data is used
    s1.showId();     // prints 101
    s2.showId();     // prints 202

    Student::showCount();  // static function call
    return 0;
}
