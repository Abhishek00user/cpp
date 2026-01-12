// Deep copy involves making the seperate copies of memory location also instead of creating the copies pointing to same location in memory

#include<iostream>
using namespace std; 

class Dummy{
    private:
    int a,b,*p;
    public:
    Dummy(){
        p=new int; //a new int type varible will be created and p will point to that var
    }
    void setData(int x,int y,int z){
        a=x;
        b=y;
        *p=z; //that var will contain the value of z
    }
    void showData(){
        cout<<a<<" "<<b<<endl;
    }
    //creating the copy constructor manually on order to make seperate copies of the 
    // memory resources and thus implementing the deep copy
    Dummy(Dummy &d){
        a=d.a;
        b=d.b;
        *p=*(d.p); //creating seperate memory locations
    }
    ~Dummy(){
        delete p;
    }
};

int main(){
Dummy d1;
d1.setData(3,5,6);
Dummy d2=d1;
d2.showData();
return 0;
}