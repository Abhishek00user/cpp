#include<iostream>
using namespace std;
class Complex{
    private:
    int a,b;
    public:
    Complex(int x,int y){
        a=x; b=y;
    }
    Complex(int k){
        a=k;
        b=0; //although there is no need to b but it needs to be initialised otherwise it would contain garbage value on creation
    }
    Complex(){
        a=0;
        b=0;
    }
    Complex(Complex &obj){  //copy constructor
        a=obj.a;
        b=obj.b;
        cout<<a<<" "<<b; //shouldn't be printed here
    }
};
int main(){
Complex c1(3,4),c2,c3(5);
Complex c5=5; //not preferrred
Complex c4(4); //a method of calling constructor which has only one argument
// some other methods 
// creating a copy constructor
Complex c6=c1; // or Complex c6(c1)
return 0;
}