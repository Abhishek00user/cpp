#include<iostream>
using namespace std;

class Complex{
    private:
    int a,b;
    public:
    void set_data(int,int);
    void showData(){
        cout<<a<<" "<<b;
    }
};
// defining a function that has been already declared in the class with the help of 
// membership label(Complex::)
void Complex::set_data(int x,int y){
    a=x; b=y;
}
int main(){
Complex c1;
c1.set_data(4,5);
c1.showData();
return 0;
}