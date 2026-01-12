#include<iostream>
using namespace std;
class parent{
    public:
    void f1(){
      cout<<"Hii i am f1 from parent class"<<endl;

    }
};
class child : public parent{
    public:
    void f1(){ //overriding the method
      cout<<"Hii i am f1 from child class"<<endl;
    }
};

int main(){
parent *p;
child objChild;
p=&objChild;
p->f1();  //we stored the address of child obj in the pointer so f1 of child should run but
// here the f1 of parent is runing .This is the problem with function overriding .
// this is happening because at compile time compiler can only access the type of pointer
// early binding is happening here.To resolve this prob,we have to stop early binding 
// happening here.we have to do late binding ,binding should be done at runtime due to 
// which ponter will be able to access the address of itself.And late binding is achieved
// through virtual keyword
return 0;
}