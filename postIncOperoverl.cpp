#include<iostream>
using namespace std;
class Integer{
    private:
    int x;
    public:
    void setData(int a){
        x=a;
    }
    void showData(){
        cout<<"x: "<<x<<endl;;
    }
    Integer operator++(){ //preincrement
        Integer i;
       i.x= ++x;   //x of ++x belongs to i1
        return(i);
    }
    Integer operator++(int){  //postincrement
        Integer i;
        i.x=x++;
        return (i);
    }
};
int main(){
Integer i1,i2;
i1.setData(3);
i1.showData();
i2=++i1;    //i2=i1.operator++();
// i2=i1++;
i1.showData();
i2.showData();
return 0;
}