#include<iostream>
using namespace std;
class Complex{
    private:
    int a,b; 
    public:
    void set_data(int x,int y){  
        a=x; b=y;
    }
    void showData(){
        cout<<a<<" "<<b;
    }
// function for adding two complex numbers
    Complex operator +(Complex c){
        Complex temp;
        temp.a=a+c.a;   //a in a+c.a belongs to the caller obj. here,the caller obj is c1
        temp.b=b+c.b;
        return (temp);
    }
};
int main(){
    Complex c1,c2,c3;
    c1.set_data(3,5);
    c2.set_data(6,7);
    c3=c1+c2;
    // c3=c1.operator+(c2);   this can also be used
    c3.showData();
return 0;
}