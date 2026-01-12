#include<iostream> 
using namespace std; 

/* local variable is same as a member's name */
class Test 
{ 
private: 
int x; 
public: 
void setX (int x) 
{ 
// this pointer is used for accessing object members when there is a local variable with the same name
	this->x = x; 
} 
void print() { cout << "x = " << x << endl; } 
}; 

int main() 
{ 
Test obj; 
int x = 20; 
obj.setX(x); 
obj.print(); 
return 0; 
} 
