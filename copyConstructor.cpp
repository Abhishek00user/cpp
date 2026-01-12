#include<iostream>
using namespace std;


class Number{
    int a;
    public:
    // Default constructor should also be given if there is a constructor already created by user because in 
    // case user only creates an instance of the class but he  doesn't assign value ,then it will throw an error
    // .Btw there was no need of creating default constructor if not any single constructor was present in the class
        Number(){
            a = 0;
        }

        Number(int num){
            a = num;
        }
        // When no copy constructor is found, compiler supplies its own copy constructor
        // we need to pass the reference of the object while creating copy constructor
        Number(Number &obj){
            cout<<"Copy constructor called!!!"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number for this object is "<< a <<endl;
        }
};
int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called becuase z2 has already been created above
    z2.display();

    Number z3 = z; // Copy constructor invoked becuase creation and assignation done in same line
    z3.display();

    // z1 should exactly resemble z  or x or y

    return 0;
}
