#include<iostream>
using namespace std;
class Dummy{
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
    Dummy(){}
    // how that default copy constructor would look like 
    Dummy(Dummy &d){
      a=d.a; 
      b=d.b;
    }
};
int main(){
Dummy d1;
d1.setData(3,6);
d1.showData();
Dummy d2=d1;  //shallow copy taking place using default copy constructor made be compiler 
// or it can also be done using implicit copy assignment operator
// Dummy d2;
// d2=d1;
d2.showData();
return 0;
}