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
    }
    Complex(){

    }
    Complex(Complex &c){  //copy constructor
        a=c.a;
        b=c.b;
    }
};
int main(){
Complex c1(3,4),c2,c3(5);
Complex c4=4; //a method of calling constructor which has only one argument
// some other methods 
Complex c5=Complex(4,5);
// creating a copy constructor
Complex c6=c1; // or Complex c6(c1)
return 0;
}