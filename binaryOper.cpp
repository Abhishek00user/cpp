#include<iostream>
using namespace std;

class complex{
    private:
    int a,b,c;
    public:
    
    void setData(int x,int y){
        a=x;
        b=y;
    }
    void showData(){
        cout<<"a:"<<a<<" b:"<<b<<endl;
    }

    complex operator +(complex c){ //operator overloading ( overloading +)
        complex temp;
        temp.a=a+c.a;  //in a+c.a the first a is of the caller object(c1) and c.a is of the argument object(c2)        
        temp.b=b+c.b;
        return(temp);

    }
};
int main(){
complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    // c3=c1.operator+(c2);  can also be called like this 
    c3=c1+c2;  //here the operand of + is of complex type instead of primitive type so if we hadn't used operator 
    // overloading then it would have been thrown error 
    c3.showData();
return 0;
}