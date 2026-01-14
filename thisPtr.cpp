#include<iostream> 
using namespace std; 

/* local variable is same as a member's name */
// A non-static member function operates on a specific object and has access to instance data members using the implicit this pointer.
// this pointer is used for accessing object members when there is a local variable with the same name

#include <iostream>
using namespace std;

class Student {
    int id;                // non-static data member
    static int count;      // static data member

public:
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
        // cout << id;     ❌ ERROR: no this pointer here
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
