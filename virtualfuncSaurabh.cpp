#include<iostream>
using namespace std;
class parent{
    public:
  virtual  void f1(){  // virtual means late binding of f1 will take place
      cout<<"Hii i am f1 from parent class"<<endl;

    }
    void f2(){

    }  
};
class child : public parent{
    public:
    void f1(){ //we don't need to write virtual here because it's already virtual due to 
    // its declaration in parent class .Infact all the derived classes with the f1 function
    //will  be considered virtual
      cout<<"Hii i am f1 from child class"<<endl;
    }
    void f2(){ 

    }
};

int main(){
parent *p,objParent;
child objChild;
p=&objChild;
p->f1(); //compulsory to use -> instead of . as p is pointerw
return 0;
}