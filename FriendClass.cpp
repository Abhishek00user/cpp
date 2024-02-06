
// demonstration for friend class
#include<iostream>
using namespace std;

class myClass{

    private:
    int privateVar;

    protected:
    int protectedVar;

    public:
    myClass(){
        privateVar=10;
        protectedVar=20;
    }
    // declaring the friend class
    friend class Friend;

};

// defining the friend class
class Friend{
    public:
    void display(myClass& obj){
        cout<<"The private variable  is : "<<obj.privateVar<<endl;
        cout<<"The protected variable is : "<<obj.protectedVar<<endl;
    }

};

int main(){
myClass obj1;
Friend f1;
f1.display(obj1);

return 0;
}