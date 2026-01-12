// // WHENEVER DERIVED CLASS CHILD CREATED THEN BASE CLASS CONSTRUCTOR(WITH NO PARAMETER) WILL ALWAYS GET CALLED 

// #include<iostream>
// using namespace std;
// class Base{
//     public:
//     int a,b;
//     Base(){
//         a=0;
//         b=0;
//         cout<<"Normal constr called from base"<<endl;
//     }
//     Base(int x,int y){
//         a=x;
//         b=y;
//         cout<<"parameterized from base called"<<endl;
//     }
// };
// class derived : public Base{
//     public:
//     derived(){
//         cout<<"normal constr from derived called"<<endl;
//     }
//     derived(int x,int y){
//         a=x;
//         b=y;
//         cout<<"parameterized from derived called"<<endl;
//     }
//     void func(){
//         cout<<"from derived class";
//     }
// };
// int main(){

//  derived d;
//  Base b;
//  Base c(8,9);
//  derived(8,4);
// return 0;
// }

//IF BASE CLASS HAS ONLY PARAMETERIZED CONSTRUCTOR THEN WE CAN'T CREATE CHILD CLASS CONSTR (WITH ARG OR WITH NO ARG)
// WE HAVE TO DEFINE A DEFAULT CONSTRUCTOR IF WE WANT TO USE PARAMETERIZED ONE
class Base {
    public:
    int a;
public:
    Base(int x) {
        a=x;
    }
};

// class Derived : public Base {
// public:
//     Derived(int y) {}   // ❌ ERROR
// };
class Derived : public Base {
public:
    Derived() : Base(10) {}  //CAN BE DONE THROUGH INITIALIZATION LIST
};


