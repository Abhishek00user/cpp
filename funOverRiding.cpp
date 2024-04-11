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
    void f2(int x){ //method hiding

    }
}; 
int main(){

child obj;
parent ob;
obj.f1();  //it will run and f1 of child will be called
ob.f1();    //it will run and f1 of parent will be called
// obj.f2();  //error
obj.f2(4);
return 0;
}