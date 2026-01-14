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
    void f2(int x){ //method hiding.by doing this the base class method can't be accessed through the child class chect

    }
}; 
int main(){

child ch;
parent p;
ch.f1();  //it will run and f1 of child will be called
p.f1();    //it will run and f1 of parent will be called
// ch.f2();  //error (if f2 was not in child class then compiler would have seached for f2 in parent class and run it,
// but since f2 is  in child class then it will stop here itself but due to argument mismatch error is thrown)
ch.f2(4);
p.f2();
return 0;
}