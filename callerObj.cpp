#include<iostream>
using namespace std;
class Complex{
    private:
    int a,b;  //instance member variable .a and b will only get memory when c1 and c2 will be created
    public:
    void set_data(int x,int y){   //instance member functions becuase they can't get accessed without creating the instance of the class
        a=x; b=y;
    }
    void showData(){
        cout<<a<<" "<<b;
    }
// function for adding two complex numbers
    Complex add(Complex c){
        Complex temp;
        temp.a=a+c.a;  //only a used because member function( which is add here) can directly access caller object
        temp.b=b+c.b;
        return (temp);
    }
};
int main(){
    Complex c1,c2,c3;
    c1.set_data(3,5);
    c2.set_data(6,7);
    c3=c1.add(c2); //c1 is caller object which calls add function and the function takes takes c2 as parameter and the result gets assigned in c3 
    c3.showData();
return 0;
}