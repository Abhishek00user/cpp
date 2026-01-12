#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=1;
        // since we declared the funtion of base class virtual ,now on calling the function
        //  with the help of base class pointer pointing to the derived class object,function of 
        // derived class will run.
        virtual void display(){
            cout<<"1 Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived=2;
            void display(){
                cout<<"2 Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"2 Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};
// the purpose of virtual function is late binding 
int main(){
    BaseClass * base_class_pointer;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;  //base class ptr pointing to object of derived class
    base_class_pointer->display();  //just try to run this after removing virtual keyword for more clarity
    return 0;
}