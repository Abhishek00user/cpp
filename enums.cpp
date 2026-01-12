#include <iostream>
using namespace std;

enum Day {
    Mon, Tue, Wed, Thu, Fri
};

enum Status {
    Success = 1,
    Failure = -1,
    Pending = 0
};

enum Color { Red, Green, Blue };

int main() {
    Day d = Wed;
    cout << d <<endl; // 2
    cout << Success << " " << Failure<<endl;

    Color c = Green;
    
// Enums make code more readable by replacing numeric constants with meaningful names, and they work naturally with switch statements
    switch (c) {
        case Red:   cout << "Red"; break;
        case Green: cout << "Green"; break;
        case Blue:  cout << "Blue"; break;
    }
    
}
