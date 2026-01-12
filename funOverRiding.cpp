#include<iostream>
using namespace std;
class parent{
    public:
    void f1(){
      cout<<"Hii i am f1 from parent class"<<endl;

    }
    void f2(){

    }  
};
class child : public parent{
    public:
    void f1(){ //overriding the method
      cout<<"Hii i am f1 from child class"<<endl;
    }
    void f2(int x){ //method hiding by doing this the base class method can't be accessed through the child class object

    }
}; 
int main(){

child obj;
parent ob;
obj.f1();  //it will run and f1 of child will be called
ob.f1();    //it will run and f1 of parent will be called
// obj.f2();  //error (if f2 was not in child class then compiler would have seached for f2 in parent class and run it,but since f2 is  
// in child class but due to argument mismatch error is thrown)
obj.f2(4);
ob.f2();
return 0;
}