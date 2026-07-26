// for dynamic memory
#include<iostream>
using namespace std;
// Instead of creating and calling function for releasing memory we can use destruc as it get automatically called when object 
// is going to be destroyed .
//main use of destructor is when we need to explicitly delete the memory (dynamic memory alloaction)
class Test {
    int* ptr;
public:
    Test() {
        ptr = new int[10];  // dynamic allocation
    }
    ~Test() {
        delete[] ptr;       // cleanup in destructor , use [] because it was array of size 10
        cout << "Memory released" << endl;
    }
};

int main(){
    Test* t1=new Test();
    delete t1;  //mandatory to use delete here in order to free memory
    return 0;
}