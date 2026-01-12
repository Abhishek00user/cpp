// overloading of binary operators as a friend function
// #include<iostream>
// using namespace std;
// class Complex{
//     private:
//     int a,b; 
//     public:
//     void set_data(int x,int y){  
//         a=x; b=y;
//     }
//     void showData(){
//         cout<<a<<" "<<b;
//     }
//     friend Complex operator+(Complex ,Complex );
// };

// // defining the friend function 

// Complex operator+(Complex X,Complex Y){ //one more argument needed when compared to  overloading using member
//  function as explained in operatorOverl.cpp because there is no caller object in friend function as friend 
// function is not a member function due to which we can't access it through caller object

//     Complex temp;
//     temp.a=X.a+ Y.a;
//     temp.b=X.b+ Y.b;
//     return (temp);
// }
// int main(){
//     Complex c1,c2,c3;
//     c1.set_data(3,5);
//     c2.set_data(6,7);
//     c3=c1+c2;
//     // c3=c1.operator+(c2);   this can also be used
//     c3.showData();
// return 0;
// }


// overloading of unary operators as a friend function
#include<iostream>
using namespace std;

class Complex{
    private:
    int a,b;
    public:
    void setData(int x,int y){
        a=x;
        b=y;
    }
    void showData(){
        cout<<"a:"<<a<<" b:"<<b<<endl;
    }
   friend Complex operator-(Complex);
};
Complex operator-(Complex X){  //one argument more than the case when overloading
// was happening with the help of member function as explained in unaryoper.cpp
    Complex temp;
    temp.a=-X.a;
    temp.b=-X.b;
    return (temp);
}  
int main(){
    Complex c1,c2;
    c1.setData(3,4);
    // c2=c1.operator-();  this can also be used instead of the below line 
    c2=-c1;
    c2.showData();
return 0;
}