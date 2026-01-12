
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
    friend class Friend;  //by writing this we are making very function of Friend as friend 
    // to myClass

};

// defining the friend class (no need to again write friend keyword here while defining that function )
class Friend{
    public:
    // the function will take reference of myClass in order to access that 
    void display(myClass& obj){
        cout<<"The private variable  is : "<<obj.privateVar<<endl;
        cout<<"The protected variable is : "<<obj.protectedVar<<endl;
    }

};
// main() is not allowed to create an object of a class whose constructor is private.
int main(){
myClass obj1;
Friend f1;
f1.display(obj1);

return 0;
}