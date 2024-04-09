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
};
int main(){
Dummy d1;
d1.setData(3,6);
d1.showData();
Dummy d2=d1;  //shallow copy taking place 
d2.showData();
return 0;
}