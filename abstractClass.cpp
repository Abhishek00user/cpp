// class which cannot be instantiated and which contains at least one pure virtual function. 
// The purpose  is to establish a base class for other classes which must implement the functions declared as pure virtual in abstract class
// An abstract class is used when we want to represent a general concept that should not be instantiated directly. It provides a common interface
//  for derived classes, forces them to implement essential functions
#include<iostream>
using namespace std;
class AbstractBase {
public:
    virtual void pureVirtualFunction() = 0; //needs to be overridden in the derived classes
};
class Derived : public AbstractBase {
public:
    void pureVirtualFunction() override { //compulsory to define
        // Provide implementation for the pure virtual function
    }
};

class vehicle{
    public:
        virtual void startEngine() = 0; // this is pure virtual function that mandatorily needs to be overridden in derived class
};
class bike : public vehicle {
    public:
        void startEngine(){
            cout<<"starting by kick"<<endl;
        }
};

class car : public vehicle{
    public:
        virtual void startEngine() = 0; // if we don't want to override then we have to declare it pure virtual in child also
};

