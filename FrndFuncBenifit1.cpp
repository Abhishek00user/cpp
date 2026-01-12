// friend function can be used to use functionalities of more than 1 classes together i.e,it can use private 
//members of  more than 1 classes at same time
#include<iostream>
using namespace std;

// forward declaration needed because B is being used in line 13 and class B is below it 
class B;
class A{
    private:
    int a;
    public:
    void setData(int x){a=x;}
    friend void fun(A&,B&);    //A and B are the classes here and necessary to use type of function(void)
};
class B{
    private:
    int b;
    public:
    void setData(int y){b=y;}
    friend void fun(A&,B&);
};
// defining the friend function
void fun(A& o1,B& o2){
    cout<<"Sum is : "<<o1.a+o2.b;
}

int main(){
A obj1;
B obj2;
obj1.setData(3);
obj2.setData(4);
fun(obj1,obj2);
return 0;
}